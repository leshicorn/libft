#include <stddef.h>

size_t ft_num_len(size_t n)
{
    size_t amo = 0;
    while (n != 0)
    {
        amo++;
        n /= 10;
    }
    return amo;
}