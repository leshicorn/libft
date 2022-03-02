#include <stddef.h>
#include <limits.h>
#include "ft_mem.h"

void *ft_print_address(void *addr)
{
    size_t i = 0;
    unsigned long long adr = (unsigned long long)addr;
    size_t size = sizeof(addr);

    while (i < size)
    {
		ft_print_hex_byte((adr >> ((size - i - 1) * CHAR_BIT)) & 0xFF);
		++i;
    }
	return addr;
}
