#include <stddef.h>

const void *ft_memchr(const void *str, int c, size_t n)
{
    while (n-- && *(unsigned char*)str != c)
        ++str;
    return (*(unsigned char*)str == c) ? str : NULL;
}