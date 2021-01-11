#include <stdio.h>
#include <stdlib.h>

#include "ft_generators.h"

int ft_rand_file(char *name, size_t len, char *alpha)
{
    FILE *fp = fopen(name, "wt");
	char *text = NULL;

    if (!fp || !(text = ft_rand_word(len, alpha)))
    {
		return -1;  
	}
	fputs(text, fp);
	free(text);
    fclose(fp);
    return 0;
}