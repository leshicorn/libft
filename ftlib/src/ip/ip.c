#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_bits(int a)
{
	for (int i = 0; i < 32; ++i)
	{
		printf("%d", (a >> (31 - i)) & 1);
		if ((i + 1) % 8 == 0 && i != 31)
			printf(".");
	}
}

void print_decimal_point(int n)
{
	printf("\t");
	printf("%d.%d.%d.%d",
			(n >> 24) & 0xFF,
			(n >> 16) & 0xFF,
			(n >> 8) & 0xFF,
			(n >> 0) & 0xFF);
	printf("\n");
}

int main(void)
{
	int ip = 0;
	int ip_t[] = { 0, 0, 0, 0 };
	int mask_len = 0;
	int mask = 0;

	scanf("%d.%d.%d.%d", &ip_t[0], &ip_t[1], &ip_t[2], &ip_t[3]);
	scanf("%d", &mask_len);

	// ip = ip_t[3] * 1 +
	//		ip_t[2] * 256 +
	//		ip_t[1] * 256 * 256 +
	//		ip_t[0] * 256 * 256 * 256;
	
	ip = (ip_t[0] << 3 * 8) + (ip_t[1] << 2 * 8) + (ip_t[2] << 1 * 8) + ip_t[3];

	for (int i = 0; i < 4; ++i)
		ip = ((ip << 8) | ip_t[i]);
	for (int i = 0; i < mask_len; i++)
		mask |= (1 << (31 - i));

	int broadcast = ip | (~mask);

	print_bits(ip);
	print_decimal_point(ip);
	print_bits(mask);
	print_decimal_point(mask);
	print_bits(mask & ip); // сетевой
	print_decimal_point(mask & ip);
	print_bits((~mask) & ip); // адрес устройствa
	print_decimal_point((~mask) & ip);
	print_bits(broadcast);
	print_decimal_point(broadcast);
	print_bits(broadcast - 1); // последний адрес
	print_decimal_point(broadcast - 1);
	print_bits((mask & ip) + 1); // первый адрес
	print_decimal_point((mask & ip) + 1);


	printf("%.0lf - max(amount of users)", pow(2, 32 - mask_len) - 2);

	return 0;
}
