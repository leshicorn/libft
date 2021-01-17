#include <stdio.h>

#include "string.h"

int validator(char *num)
{
    int len = 0;
    int sum_odd = 0;
	int sum_even = 0;
	int checker = 0;

// 1234 4567 7890 1234

	while (*num)
	{
		checker = (*num - '0') * 2;
        checker = (checker > 9) ? checker - 9 : checker;
		if (!(len % 2))
			sum_odd += checker;
		else
			sum_even += checker;
		++num;
		++len;
	}
	printf("%d\n", ((len % 2) ? sum_even : sum_odd) % 10);

    return ((len % 2) ? sum_even : sum_odd) % 10;
}