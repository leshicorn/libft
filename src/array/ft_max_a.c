#include <stddef.h>
#include "ft_array.h"

tab_t ft_max_a (tab_t* mas, size_t size)
{
    tab_t max = mas[0];

    while(size)
    {
        if (*mas > max)
            max = *mas;
        ++mas;
        --size;
    }
    
    return max;
}