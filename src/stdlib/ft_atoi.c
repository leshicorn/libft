#include "ft_ctype.h"

int ft_atoi(char* buf)
{
    int res = 0;
	int sign = 1;

	while (ft_isspace(*buf))
        ++buf;

    if (*buf == '-' || *buf == '+')
    {
		if (*buf == '-')
			sign = -1;
        ++buf;
    }

    while (*buf && ft_isnum(*buf))
    {
		res *= 10;
        res += *buf - '0';
        ++buf;
    }
    return res * sign;
}