#include <stddef.h>
#include <stdio.h>

void print_memory(void *ptr, size_t size)
{
	size_t i = 0;
	size_t break_len = 16;

	printf("%p: ", ptr);
	while (i < size)
	{
		printf("%02hhx ", *((unsigned char*)ptr + i));
		++i;
		if (i % break_len == 0 && i != size)
			printf("\n%p: ", ptr + i);
	}
	printf("\n");
}