#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *str)
{
    char *res_copy;
    char *str_c = str;
    int size = 0;

    while (*str_c)
    {
        size++;
        ++str_c;
    }

    res_copy = malloc(sizeof(char) * (size + 1));

    while(*str)
    {
        *res_copy = *str;
        ++str;
    }
    
    return res_copy;
}