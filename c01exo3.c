#include <stdio.h>

void ft_swap(int* a, int* b);

int main()
{
	int a = 10;
	int b = 5;
	printf("%d,%d\n",a,b);
	ft_swap(&a,&b);
	printf("%d,%d\n", a,b);
	return 0;
}

void ft_swap(int *a, int *b)
{
	int memoire;
	memoire = *a;
	*a = *b;
	*b = memoire;
}

