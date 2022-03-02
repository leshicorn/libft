#include <stddef.h>

void *ft_memset (void *dest, int c, size_t n)
{
    unsigned char* dest_copy = dest;

    while (n--)
        *dest_copy++ = c;
    return dest;
}