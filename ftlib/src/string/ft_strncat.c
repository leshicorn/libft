#include <stddef.h>

char* ft_strncat(char* dest, char* src, size_t n)
{
    char* dest_copy = dest;
    size_t i = 0;

    while (*dest)
    {
        ++dest;
    }

    while (*src && i < n)
    {
        *dest = *src;
        ++src;
        ++i;
    }
    *dest = 0;

    return dest_copy;
}