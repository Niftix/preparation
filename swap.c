#include <stdio.h>

void swap(int* a, int* b);

int main()
{
	int a = 10;
	int b = 5;
	printf("a = %d, b = %d\n",a,b);
	swap(&a,&b);
	printf("a = %d, b = %d\n",a,b);
	return 0;
}

void swap(int* a, int* b)
{
	int memoire = *b;
	*b = *a;
	*a = memoire;
}
