/*
 * Simple malloc implementation
 *
 * Copyright (c) 2014 Google, Inc
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <malloc.h>
#include <mapmem.h>
#include <asm/io.h>

DECLARE_GLOBAL_DATA_PTR;

void *malloc_simple(size_t bytes)
{
	ulong new_ptr;
	void *ptr;

	new_ptr = gd->malloc_ptr + bytes;
	debug("%s: size=%lx, ptr=%lx, limit=%lx: ", __func__, bytes, new_ptr,
	      gd->malloc_limit);
	if (new_ptr > gd->malloc_limit) {
		debug("space exhausted\n");
		return NULL;
	}
	ptr = map_sysmem(gd->malloc_base + gd->malloc_ptr, bytes);
	gd->malloc_ptr = ALIGN(new_ptr, sizeof(new_ptr));
    debug("hahaha\n");
    debug("%lx\n", (ulong)ptr);
    
    //debug("debug mem!\n");
    //int count = 11;
    //while (count--) {
    //    debug("0x%08x:0x%08x\n", ptr+(10-count), *(uint32_t*)(ptr+(10-count)));
    //    uint32_t tmp = *(uint32_t*)(ptr+10-count);
    //    *(uint32_t*)(ptr+10-count) = tmp;
    //}
    //debug("+++++++\n");

	return ptr;
}

void *memalign_simple(size_t align, size_t bytes)
{
    debug("into memalign simple\n");
	ulong addr, new_ptr;
	void *ptr;

	addr = ALIGN(gd->malloc_base + gd->malloc_ptr, align);
	new_ptr = addr + bytes - gd->malloc_base;
	debug("%s: size=%lx, ptr=%lx, limit=%lx: ", __func__, bytes, new_ptr,
	      gd->malloc_limit);
	if (new_ptr > gd->malloc_limit) {
		debug("space exhausted\n");
        return NULL;
    }
	ptr = map_sysmem(addr, bytes);
	gd->malloc_ptr = ALIGN(new_ptr, sizeof(new_ptr));

    debug("finish memalign simple\n");
	return ptr;
}

#if CONFIG_IS_ENABLED(SYS_MALLOC_SIMPLE)
void *calloc(size_t nmemb, size_t elem_size)
{
	size_t size = nmemb * elem_size;
	void *ptr;

    debug("before a calloc\n");
    // TODO: fix by jeasinema@20170503
	//ptr = malloc(size);
	ptr = malloc_simple(size);
	//memset(ptr, '\0', size);

    debug("after a calloc\n");
	return ptr;
}
#endif
