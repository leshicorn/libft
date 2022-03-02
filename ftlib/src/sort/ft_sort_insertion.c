#include "ft_stdlib.h"

void ft_sort_insertion (int *mas, int size)
{
	int j = 0, i = 0;
	
    for (i = 1; i < size; i++)    
	{		
		for (j = i; j > 0 && mas[j - 1] > mas[j]; j--)
		{
				ft_swap(&mas[j - 1], &mas[j]); 
		}
	}
	
	return;
}