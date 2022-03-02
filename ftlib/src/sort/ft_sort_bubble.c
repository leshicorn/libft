#include "ft_stdlib.h"

#include "ft_array.h"

void swappp(int *a, int *b)
{   
    int swaper = *a;

    *a = *b;
    *b = swaper;
}

int sum_chet(int a)
{
	int res = 0;
	while (a != 0)
	{
		if ((a % 10) % 2 == 0)
			res += a % 10;
		a /= 10;
	}
	return res;
}

void ft_sort_bubble (int *mas, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int k = 0; k < size - i - 1; k++)
        {
            if (sum_chet(mas[k]) < sum_chet(mas[k + 1]))
                swappp((mas + k), (mas + k + 1));
        }
    }
    return;
}
/*
void ft_sort_bubble (int *mas, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int k = 0; k < size - i - 1; k++)
        {
            if (*(mas + k) > *(mas + k + 1))
                swappp((mas + k), (mas + k + 1));
        }
    }
    return;
}*/

/* PASCAL VERSION OF SWAP:
procedure swap(var a:integer, var b:integer);
var
swaper : integer;
begin
	swaper = a;
	a = b;
	b = swaper;
end;

PASCAL VERSION OF sum_chet

function sum_chet(a:integer):integer;
var
res : integer;
begin
	res := 0;
	while (a <> 0) do 
	begin
		if ((a mod 10) mod 2 = 0)
			res := res + a mod 10;
		a := a div 10;
	end;
	sum_chet := res;
end;

procedure ft_sort_bubble (var mas: Tmas, size: integer)
var
i : integer;
k : integer;
begin
	for i := 1 to size do
    begin
		for k := 1 to (size - i) do
        begin
            if (sum_chet(mas[k]) < sum_chet(mas[k + 1])) then
                swappp(mas[k], mas[k + 1]);
        end;
    end;
end;
*/