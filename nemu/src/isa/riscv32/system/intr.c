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

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.mepc = epc;   //存放触发异常 pc 的值
  cpu.mcause = NO;  //中断号
  cpu.mstatus |= 0x1800; 
  #ifdef CONFIG_ETRACE
  printf("mcause:%08x,mepc:%08x,mstatus:%08x,mtvec:%08x\n",epc,NO,cpu.mstatus,cpu.mtvec);
  #endif
  return cpu.mtvec; //返回统一的异常处理程序地址
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
