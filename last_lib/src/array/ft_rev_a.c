#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_array.h"

void ft_rev_a (tab_t* mas, size_t size)
{
    for (size_t i = 0; i < size/2; i++)
    {
        ft_swap(mas + i, mas + size - i - 1);
    }
}