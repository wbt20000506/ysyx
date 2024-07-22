#include <proc.h>
#include <elf.h>
#include <fs.h>
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_386
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__) ||defined(__ISA_RISCV32E__)
# define EXPECT_TYPE EM_RISCV
#else
# error Unsupported ISA
#endif

extern size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
  int fd = fs_open(filename,0,0);
  Elf_Ehdr *elf_head = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
  //ramdisk_read(elf_head,0,sizeof(Elf_Ehdr));
  fs_read(fd,elf_head,sizeof(Elf_Ehdr));
  assert(*(uint32_t *)(elf_head->e_ident) == 0x464c457f); 
  assert(elf_head->e_machine == EXPECT_TYPE);
  Elf_Phdr *pro_head = (Elf_Phdr*)malloc(sizeof(Elf_Phdr)*elf_head->e_phnum);
  //ramdisk_read(pro_head, elf_head->e_phoff, sizeof(Elf_Phdr) * elf_head->e_phnum);
  fs_read(fd,pro_head, sizeof(Elf_Phdr) * elf_head->e_phnum);
  for(Elf_Phdr *p=pro_head; p<pro_head+elf_head->e_phnum; p++){
    if(p->p_type==PT_LOAD){
      fs_lseek(fd,p->p_offset,SEEK_SET);
      fs_read(fd, (void*)(p->p_vaddr),p->p_filesz);
      //ramdisk_read((void*)(p->p_vaddr),p->p_offset,p->p_filesz);
      memset((void*)p->p_vaddr+p->p_filesz,0,p->p_memsz - p->p_filesz);
    }
  }
  free(elf_head);
  free(pro_head);
  return elf_head->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

