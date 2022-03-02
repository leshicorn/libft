#include <stddef.h>

int ft_strncmp(char* s1, char* s2, size_t num)
{
    size_t i = 0;

    while (*s1 == *s2 && *s1 && *s2 && i < num)
    {
        s1++;
        s2++;
        i++;
    }
    return *s1 - *s2;
}