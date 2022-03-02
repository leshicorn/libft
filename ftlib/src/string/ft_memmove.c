#include <stdlib.h>
#include <stddef.h>

void * ft_memmove(void * dest, const void * src, size_t num)
{
    unsigned char* buf;
    unsigned char* buf_c;
    unsigned char* dest_c = dest;
    size_t num_c = num;

    buf = malloc(sizeof(unsigned char) * num);
    if (buf == NULL)
        return (void*)src;
    buf_c = buf;

    while (num--)
        *buf_c++ = *(unsigned char*)src++;

    while (num_c--)
        *dest_c++ = *buf++;
    return dest;
}