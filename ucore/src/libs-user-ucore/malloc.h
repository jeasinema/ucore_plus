#ifndef __USER_LIBS_MALLOC_H__
#define __USER_LIBS_MALLOC_H__

#include <types.h>

void *malloc(size_t size);
void *shmem_malloc(size_t size);
void free(void *ap);

// add by jeasinema@20170426
void *calloc(size_t num, size_t size);

#endif /* !__USER_LIBS_MALLOC_H__ */
