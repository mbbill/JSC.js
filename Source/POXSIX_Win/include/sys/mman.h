#ifndef MMAN_H
#define MMAN_H

#define PROT_NONE 0
#define PROT_READ 1
#define PROT_WRITE 2
#define PROT_EXEC 4

#define MAP_FILE 0
#define MAP_SHARED 1
#define MAP_PRIVATE 2
#define MAP_TYPE 0xF
#define MAP_FIXED 0x10
#define MAP_ANONYMOUS 0x20
#define MAP_ANON MAP_ANONYMOUS

#define MAP_FAILED ((void *)-1)

void *mmap (void *__addr, size_t __len, int __prot, int __flags, int __fd, off_t __off);
int munmap (void *__addr, size_t __len);

#endif // MMAN_H
