#include <unistd.h>

void ft_print_hex_num(unsigned char num)
{
	unsigned char c = num & 0xF;
	if (c <= 9)
		c += '0';
	else
		c += 'a' - 10;
	write(1, &c, 1);
}