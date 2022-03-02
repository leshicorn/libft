#include <stddef.h>
#include <unistd.h>
#include "ft_mem.h"

void *ft_print_hex_line(void *addr, size_t width, size_t group)
{
    unsigned char *addr_copy = (unsigned char *)addr;
    size_t i = 1;

    while (i <= width)
    {
        ft_print_hex_byte(*addr_copy);
        
		if (i % group == 0)
			write(1, " ", 1);
		i++;
		++addr_copy;
    }
    return addr;
}