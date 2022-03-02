#include <stdlib.h>

div_t ft_div(int delim, int delit)
{
    div_t res = { 
		.quot = delim / delit,
		.rem = delim % delit
	};
    return res;
}