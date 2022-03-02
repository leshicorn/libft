#include <stddef.h>
#include "ft_array.h"

tab_t ft_min_a (tab_t* mas, size_t size)
{
    tab_t min = mas[0];

    while(size)
    {
        if (*mas < min)
            min = *mas;
        ++mas;
        --size;
    }
    
    return min;
}