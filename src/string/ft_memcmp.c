#include <stddef.h>

int memcmp(const void * p1, const void * p2, size_t n)
{
	int ret = 0;
	while (n-- &&
		!(ret = *(unsigned char*)p1++ - *(unsigned char*)p2++))
		;
    return ret;
}