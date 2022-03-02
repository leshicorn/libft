#include <stddef.h>
#include "ft_array.h"

void ft_fill_a(tab_t* mas, size_t size, range_t r)
{
	int i = r.from;
	while (size)
    {
        *mas++ = i;
		i += r.step;
        if (i > r.to)
        {
			i = r.from;
        }
        size--;
    }
}