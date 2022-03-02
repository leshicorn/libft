#include <stdio.h>
#include <math.h>

const int accuracy = 10;
const int tests = 1;

double ft_sin(double x)
{
	double res = 0;
	int counter = 2;
	int factorial_s = 1;
	
	for (int i = 1; i < accuracy; i += 2)
	{
		res += pow(-1, counter) * (pow(x, i) / factorial_s);
		factorial_s *= (i + 1) * (i + 2);
		counter++;
	}
	
	return res;
}

int main()
{	
	for (double x = 0.01; x < tests; x += 0.13)
	{
		printf("%lf - our\t%lf - from library\n", ft_sin(x), sin(x));
	}
	
	return 0;
}