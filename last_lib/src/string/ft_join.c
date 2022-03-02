#include <stdlib.h>

#include "ft_string.h"

char *ft_join(char **strs, char *sep)
{
	char *res;
	int i = 0;
    int sum = 0;
    int len = 0;
	int len_of_sep = ft_strlen(sep);
    char **walker = strs;

    while (walker[sum])
	{
        len += ft_strlen(walker[sum]);
        sum++;
	}

    res = malloc(sizeof(char) * (1 + len + (sum - 1) * len_of_sep));
    while (*walker)
    {
        ft_strcat(res, *walker);
        if (i <= sum - 1)
            ft_strcat(res, sep);
        i++;
        ++walker;
    }
    *(res + len + (sum - 1) * len_of_sep) = 0;
    return res;
}