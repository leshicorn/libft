#include "ft_mem.h"

void ft_print_hex_byte(unsigned char addr)
{
	ft_print_hex_num(addr >> 4);
	ft_print_hex_num(addr);
}