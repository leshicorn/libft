#include "ft_stdlib.h"

void ft_sort_bubble (int *mas, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int k = 0; k < size - i - 1; k++)
        {
            if (*(mas + k) > *(mas + k + 1))
                ft_swap((mas + k), (mas + k + 1));
        }
    }
    return;
}