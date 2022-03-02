int ft_numlen(int n)
{
    int res = 0;
    if (n < 0)
        res++;
    while (n / 10 != 0)
    {
        n /= 10;
        res++;
    }
    return ++res;
}