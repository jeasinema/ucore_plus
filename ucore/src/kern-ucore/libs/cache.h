#ifndef _UCORE_CACHE_H
#define _UCORE_CACHE_H

#if defined(UCONFIG_ARCH_I386)
#include <cachet.h>
#endif

#define L1_CACHE_ALIGN(x) __ALIGN_KERNEL(x, L1_CACHE_BYTES)

#define __ALIGN_KERNEL(x, a)		__ALIGN_KERNEL_MASK(x, ((typeof(x))(a)-1))

#define __ALIGN_KERNEL_MASK(x, mask)	(((x) + (mask)) & ~(mask))


#endif
