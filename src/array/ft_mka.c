#include <stddef.h>
#include <stdlib.h>
#include "ft_array.h"

tab_t* ft_mka(size_t n)
{
    return (tab_t*)malloc(sizeof(tab_t) * n);
}