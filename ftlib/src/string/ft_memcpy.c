#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char* dest_c = (unsigned char*)dest;

    while (n--)
        *dest_c++ = *(unsigned char*)src++;
    return dest; 
}

// 123456789990
// -3-2-10123