#include "ft_stdlib.h"
#include <stdlib.h>

char* ft_itoa(int n)
{
	int len = ft_numlen(n);
	int i = len - 1;

    char* buf = malloc(sizeof(char) * (len + 1));
	if (!buf)
		return NULL;

	buf[len] = 0;
	if (n < 0)
        buf[0] = '-';
	if (len == 1 && n == 0)
		buf[len - 1] = '0';
    while (n != 0)
	{
        buf[i] = '0' + n % 10;
        n /= 10;
		--i;
    }
    return buf;
}