#include <unistd.h>

#include "ft_stdlib.h"

void    ft_putnbr(int n)
{
    char c;

    if (n / 10)
        ft_putnbr(n / 10);
    else if (n < 0)
        write(1, "-", 1);
    c = ft_abs(n % 10) + '0';
    write(1, &c, 1);
}