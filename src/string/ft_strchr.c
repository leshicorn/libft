char *ft_strchr (char * str, int sym) 
{
    while (*str && *str != (char)(sym))
    	++str;
    return (str);
}