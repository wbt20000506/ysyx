#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <elf.h>
#include <libelf.h>
#include <gelf.h>
extern char **global_argv;
char *load_elf_symbols(const char *elf_path, const uint32_t addr)
{
    int fd;
    Elf *elf;
    Elf_Scn *scn = NULL;
    GElf_Shdr shdr;
    Elf_Data *data;
    char *sym_name;


    if (elf_version(EV_CURRENT) == EV_NONE)
    {
        fprintf(stderr, "ELF library initialization failed: %s\n", elf_errmsg(-1));
        return NULL;
    }

    if ((fd = open(elf_path, O_RDONLY, 0)) < 0)
    {
        perror("Failed to open ELF file");
        return NULL;
    }

    if ((elf = elf_begin(fd, ELF_C_READ, NULL)) == NULL)
    {
        fprintf(stderr, "elf_begin() failed: %s\n", elf_errmsg(-1));
        return NULL;
    }

    while ((scn = elf_nextscn(elf, scn)) != NULL)
    {
        if (gelf_getshdr(scn, &shdr) != &shdr)
        {
            fprintf(stderr, "gelf_getshdr() failed: %s\n", elf_errmsg(-1));
            continue;
        }

        // if (shdr.sh_type == SHT_STRTAB)
        // {
        //     elf_strptr(elf, elf_getshdrstrndx(elf, &shstrndx), shdr.sh_name);
        //     if (shdr.sh_name == 0x00000009)
        //     {
        //         strtab_offset = shdr.sh_offset;
        //         Log("%08lx", strtab_offset);
        //     }
        // }

        if (shdr.sh_type == SHT_SYMTAB)
        {
            data = elf_getdata(scn, NULL);
            int count = shdr.sh_size / shdr.sh_entsize;
            for (int i = 0; i < count; i++)
            {
                GElf_Sym sym;
                gelf_getsym(data, i, &sym);
                if (ELF32_ST_TYPE(sym.st_info) == STT_FUNC)
                {
                    uint32_t a = (unsigned long)sym.st_value;

                    int b = (unsigned long)sym.st_size;
                    if (a <= addr && addr <= a + b)
                    {
                        sym_name = elf_strptr(elf, shdr.sh_link, sym.st_name);
                        return sym_name;
                        break;
                    }
                }
            }
        }
    }
    elf_end(elf);
    close(fd);
    return NULL;
}

void ftace(char j,uint32_t f_pc,uint32_t f_inst,uint32_t f_dnpc) {
    char *elf_file=global_argv[1];
    char *dot = strrchr(elf_file, '.');
    if (dot) {
        // 检查是否是 .bin 后缀
        if (strcmp(dot, ".bin") == 0) {
            // 如果是，改为 .elf
            strcpy(dot, ".elf");
        }
    }
    if(j=='j'){
      if (f_inst==0x00008067)
      {
        //block_nun--;
        //int a=block_nun;
        printf("0x%08x:",f_pc);
        // while(a--){
        //   printf(" ");
        // }
        load_elf_symbols(elf_file,f_dnpc);
        printf("ret [%s]\n",load_elf_symbols(elf_file,f_dnpc));
      }else
      {
        //int b=block_nun;
        printf("0x%08x:",f_pc);
        // while(b--){
        //   printf(" ");
        // }
        
        printf("call [%s@0x%08x]\n",load_elf_symbols(elf_file,f_dnpc),f_dnpc);
        //block_nun++;
      }
    }
}