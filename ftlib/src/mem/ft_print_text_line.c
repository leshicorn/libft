#include <stddef.h>
#include <unistd.h>
#include "ft_ctype.h"

void *ft_print_text_line(void *addr, size_t width)
{
	unsigned char *addr_copy = (unsigned char *)addr;
    while (width)
    {
        if (ft_isprint(*addr_copy))
        	write(1, addr_copy, 1);
		else
			write(1, ".", 1);
        --width;
		++addr_copy;
    }
	return addr;
}