#include "ft_array.h"

void ft_swap(tab_t *a, tab_t *b)
{   
    tab_t swaper = *a;

    *a = *b;
    *b = swaper;
}