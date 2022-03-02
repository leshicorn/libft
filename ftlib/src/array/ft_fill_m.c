#include <stddef.h>
#include "ft_array.h"

void ft_fill_m(tab_t** mas, size_t n, size_t m,  range_t r)
{
	int i = r.from;
    size_t m_copy = m;
	while (n)
    {
		while (m)
		{
			*mas[m - 1] = i;
			i += r.step;
			if (i > r.to)
			{
				i = r.from;
			}
			m--;
			++mas;
		}
		n--;
		m = m_copy;
    }
}