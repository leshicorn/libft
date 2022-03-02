#include <stdio.h>
#include <stdlib.h>

#include "ft_string.h"
#include "ft_array.h"

char * ft_random_word(char* alph, range_t len)
{
    char* res = NULL;
    int j = rand() % (len.to - len.from) + len.from;
    int f = ft_strlen(alph);
    res = malloc(sizeof(char*) * (j + 1));

	if (!res)
		return NULL;

    for (int i = 0; i < j; i++)
    {
        res[i] = alph[rand() % f];
    }

    res[j] = 0;
    
    return res;
}