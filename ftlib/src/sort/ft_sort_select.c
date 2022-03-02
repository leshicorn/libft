#include "ft_stdlib.h"

void ft_sort_select (int *mas, int size)
{
	int i = 0, j = 0;
	int min = 0;
	
	for (i = 0; i < size; i++)
	{
		min = i;
		
		for (j = i + 1; j < size; j++)
		{	
			min = (mas[j] < mas[min] ) ? j : min;
		}

		if (i != min)
		{
			ft_swap((mas + i), (mas + min));
		}
	}
 
	return;
}

/*
procedure swap(var a:integer, var b:integer);
var
swaper : integer;
begin
	swaper = a;
	a = b;
	b = swaper;
end;


procedure ft_sort_select(var m : Tmas, size : integer);
var
i, j, min : integer;
begin
	for i := 1 to N do
	begin
		min := i;
		for j := (i + 1) to N do
		begin
			if (mas[j] < mas[min]) then
				min := j
			else
				min := min;
		end;
		if i <> min then
			swap(mas[i], mas[min]);
	end;
end;
*/