/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/vaddr.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
bool check_parentheses(int p, int q);
int find(int p, int q);
word_t eval(int p, int q, bool *success);
enum {
  TK_NOTYPE = 256,  // space
  TK_EQ,            // 等于运算符 "=="
  TK_NUM,           // 数字
  TK_PLUS,          // 加号 "+"
  TK_MINUS,         // 减号 "-"
  TK_MUL,           // 乘号 "*"
  TK_DIV,           // 除号 "/"
  TK_LPAREN,        // 左括号 "("
  TK_RPAREN,        // 右括号 ")"
  TK_NEQ,
  TK_AND,
  TK_DEREF,
  TK_REG
  /* TODO: Add more token types */
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},     // spaces
  {"\\+", '+'},          // plus
  {"\\-", '-'},          // subtraction
  {"\\*", '*'},          // multiplication
  {"\\/", '/'},          // division
  {"\\(", '('},          // left parenthesis
  {"\\)", ')'},          // right parenthesis
  {"(0[xX][0-9A-Fa-f]+|\\b[0-9]+\\b)", TK_NUM},      // numbers
  {"==", TK_EQ},         // equal
  {"!=",TK_NEQ},
  {"&&",TK_AND},
  {"\\${1,2}\\w+", TK_REG},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        
        switch (rules[i].token_type) {
          case TK_NOTYPE:{if (nr_token==0){tokens[nr_token].type = TK_NOTYPE;break;} else {nr_token--; break;}}
          case '*':tokens[nr_token].type = TK_MUL;break;
          case '+':tokens[nr_token].type = TK_PLUS;break;
          case '-':tokens[nr_token].type = TK_MINUS;break;
          case '/':tokens[nr_token].type = TK_DIV;break;
          case '(':tokens[nr_token].type = TK_LPAREN;break;
          case ')':tokens[nr_token].type = TK_RPAREN;break;
          case TK_REG:{tokens[nr_token].type = TK_REG;strncpy(tokens[nr_token].str,substr_start+1,substr_len);
                      tokens[nr_token].str[substr_len]='\0';break;}
          case TK_AND:tokens[nr_token].type = TK_AND;break;
          case TK_EQ:tokens[nr_token].type = TK_EQ;break;
          case TK_NEQ:tokens[nr_token].type = TK_NEQ;break;
          case TK_NUM:{tokens[nr_token].type = TK_NUM;
                      strncpy(tokens[nr_token].str,substr_start,substr_len);
                      tokens[nr_token].str[substr_len]='\0';break;}
          default:Log("error");
        }
        Log("tokens[%d].type=%d,tokens[%d].str=%s",nr_token,tokens[nr_token].type,nr_token,tokens[nr_token].str);
        nr_token++;
        break;
        
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  for (int i = 0; i < nr_token; i++) {
    if (tokens[i].type == TK_MUL) {
        if (i == 0 || tokens[i - 1].type == TK_LPAREN || tokens[i - 1].type == TK_PLUS || tokens[i - 1].type == TK_MINUS|| tokens[i - 1].type == TK_MUL
        || tokens[i - 1].type == TK_DIV|| tokens[i - 1].type == TK_EQ|| tokens[i - 1].type == TK_NEQ|| tokens[i - 1].type == TK_AND) {
            tokens[i].type = TK_DEREF;  
        }
    }
}
  return eval(0,nr_token-1,success);
}

word_t eval(int p,int q,bool *success){
  if(tokens[p].type==TK_NOTYPE)
  p++;
  Log("p:%d,q:%d",p,q);
  *success=true;
  if(p>q){
    *success=false;
    return 0;
  }
  else if(p==q){
    if(tokens[p].type!=TK_NUM&&tokens[p].type!=TK_REG){
      *success=false;
      return 0;
    }else if(tokens[p].type==TK_NUM){
      word_t i;
      if(strncmp("0x", tokens[p].str, 2) == 0 || strncmp("0X", tokens[p].str, 2) == 0){
        sscanf(tokens[p].str,"%x",&i);
      }else{
        sscanf(tokens[p].str,"%d",&i);
      }
      return i;
    }else if(tokens[p].type==TK_REG){
      return isa_reg_str2val(tokens[p].str, success);
    }
  }
  else if(check_parentheses(p,q)==true)
  {
    
    return eval(p+1,q-1,success);
  }
  else{
    int op=find(p,q);
    word_t val1=eval(p,op-1,success);
    //assert(0);
    word_t val2=eval(op+1,q,success);
    
    switch (tokens[op].type)
    {
    case TK_PLUS:return val1+val2;
    case TK_MINUS:return val1-val2;
    case TK_MUL:return val1*val2;
    case TK_DIV:return val1/val2;
    case TK_EQ:return val1==val2;
    case TK_NEQ:return val1!=val2;
    case TK_AND:return val1&&val2;
    case TK_DEREF: return vaddr_read(val2,4);
    default:assert(0);
    }
  }
  return 0;
}

bool check_parentheses(int p,int q){
  //Log("p:%d,q:%d",p,q);
  if(tokens[p].type==TK_LPAREN&&tokens[q].type==TK_RPAREN){
    int n=0,m=1;
    for(int i=p;i<q;i++){
      if(tokens[i].type==TK_LPAREN){
        n++;
      }
      if (tokens[i].type==TK_RPAREN)
      {
        m++;
      }
      if(n<m){
        return false;
      }
      //Log("n:%d,m:%d,i:%d",n,m,i);
    }
    if(n!=m){
      return false;
    }else
    return true;
  }else
  return false;
}

// 定义运算符的优先级，越小优先级越高
static int op_precedence(int type) {
    switch (type) {
        case TK_PLUS:
        case TK_MINUS:
            return 1;
        case TK_MUL:
        case TK_DIV:
            return 2;
        case TK_EQ:
        case TK_NEQ:
            return 4;
        case TK_AND:
            return 3;
        case TK_DEREF:
            return 5;
        default:
            return 999;  // 非运算符，优先级无穷大
    }
}

int find(int p, int q) {
    int i;
    int min_prec = 999;  // 最小优先级初始化为最大整数
    int op = -1;  // 存储主运算符位置
    int depth = 0;  // 当前括号深度

    for (i = p; i <= q; i++) {
        if (tokens[i].type == TK_LPAREN) {
            depth++;
        } else if (tokens[i].type == TK_RPAREN) {
            depth--;
        } else if (depth == 0 && tokens[i].type != TK_NUM) {  // 只在最外层处理运算符
            int prec = op_precedence(tokens[i].type);
            // 当发现优先级相同的操作符时，选择最右侧的一个，保证左结合性
            if (prec <= min_prec) {
                min_prec = prec;
                op = i;
            }
        }
    }

    
    return op;
}
