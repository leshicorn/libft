#include <stddef.h>

char* ft_strncpy(char* dest, char* src, size_t n)
{
    char* dest_copy = dest;
    size_t i = 0;

    while(*src && i < n)
    {
        *dest = *src;
        ++src;
        ++dest;
        ++i;
    }
    while (i < n)
    {
        *dest = 0;
        ++dest;
        ++i;
    }
    return dest_copy;
}