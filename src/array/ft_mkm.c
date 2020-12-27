#include <stddef.h>
#include <stdlib.h>

#include "ft_array.h"

tab_t** ft_mkm(size_t m, size_t n)
{
    if (m == 0 || n == 0)
    	return NULL;
    tab_t** res = (tab_t**)malloc(sizeof(tab_t*) * m);
    while (m)
    {
        res[m - 1] = (tab_t*)malloc(sizeof(tab_t) * n);
        m--;
    }
    return res;
}