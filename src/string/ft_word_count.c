#include "ft_string.h"

int ft_word_count(char* str, char* delim)
{
    int state = 0;
    int res = 0;
    
    while (*str)
    {
        if (!ft_strchr(delim, *str))
    	{
			if (!state)
				++res;
			state = 1;
		}
        else
            state = 0;
		++str;
    }
    return res;
}