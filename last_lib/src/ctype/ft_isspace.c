int     ft_isspace(int c)
{
    return (c == '\t' || c == '\v' || c == '\f' ||
			c == '\r' || c == '\n' || c == ' ');
}