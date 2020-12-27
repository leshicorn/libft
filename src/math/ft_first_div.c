
unsigned long long ft_first_div(unsigned long long n)
{
	unsigned long long i = 2;
	while (i * i <= n && n % i && i < 4294967296)
	{
		++i;
	}
	return (n % i) ? n : i;
}