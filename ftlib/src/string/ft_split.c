#include "ft_string.h"

#include <stdlib.h>

char **ft_split(char *str, char *delim)
{
	char** res;
    int count = 0;
    int i = 0;
	int j = 0;

    count += ft_word_count(str, delim);

    res = (char**)malloc((count + 1) * sizeof(char*));
	if (!res)
		return NULL;
	res[count] = NULL;
    while (*str)
    {
        if (!ft_strchr(delim, *str))
        {
			if (j != 0)
			{
				res[i] = malloc((j + 1) * sizeof(char));
				ft_strncpy(res[i], str - j, j);
				res[i][j] = 0;
				++i;
			}
			j = 0;
		}
		else
			++j;
		++str;
    }
    return res;
}