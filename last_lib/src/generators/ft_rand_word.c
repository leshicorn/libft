#include <stdlib.h>

#include "ft_string.h"

char *ft_rand_word(size_t len, char *alpha)
{
	char *res = NULL;
    size_t len_alpha = 0;
	size_t i = 0;

	if (!len || !alpha ||
		!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return NULL;
	len_alpha = ft_strlen(alpha);
    while (i < len)
        res[i++] = alpha[rand() % len_alpha];
    res[i] = 0;
    return res;
}
