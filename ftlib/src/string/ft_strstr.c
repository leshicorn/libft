#include <stddef.h>
/*
char *ft_strstr (char *haystack, char *needle) 
{
	char *needle_ptr = needle;
	char *haystack_ptr = haystack;
 
  	while (*haystack && *needle_ptr)
	{
    	needle_ptr = needle;
    	haystack_ptr = haystack;

        while (*needle_ptr &&
				*needle_ptr == *haystack_ptr)
        {
            ++needle_ptr;
            ++haystack_ptr;
        }
		++haystack;
  	}
  	return haystack - (!*needle_ptr ? 1 : 0);
}*/

char	*ft_strstr(const char *str, const char *needle)
{
	const char *temp_str;
	const char *temp_needle;

	if (str && needle && !*str && !*needle)
		return ((char*)str);
	while (*str)
	{
		temp_needle = needle;
		temp_str = str;
		while (*temp_needle && *temp_needle == *temp_str++)
			temp_needle++;
		if (!*temp_needle)
			return ((char*)str);
		++str;
	}
	return (NULL);
}