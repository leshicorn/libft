#include <stdio.h>
#include <unistd.h>
#include "ft_mem.h"

void *ft_print_memory(void *addr, size_t size)
{
	unsigned char *addr_copy = (unsigned char *)addr;
	size_t width = 16;
	size_t group = 2;

    while (size)
    {
		ft_print_address(addr_copy);
		write(1, ": ", 2);
        ft_print_hex_line(addr_copy,
						(size >= width) ? width : size,
						group);
        ft_print_text_line(addr_copy,
							(size >= width) ? width : size);
		write(1, "\n", 1);

        addr_copy += width;
		size -= (size >= width) ? width : size;
    }
	return addr;
}