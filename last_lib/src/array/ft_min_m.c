#include <stddef.h>
#include "ft_array.h"

tab_t ft_min_m (tab_t** mas, size_t n, size_t m)
{
    tab_t min = mas[0][0];
    size_t n_copy = n;

    while(m)
    {
    while(n)
    {
        if (*mas[m-1] < min)
            min = *mas[m-1];
        ++mas;
        --n;
    }
    n = n_copy;
    m--;
    }
    return min;
}