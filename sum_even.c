#include <stdio.h>

int sum_even(int n);

int main(void)
{
	int n = 10;
	int somme = sum_even(n);
	printf("%d\n", somme);
	return 0;
}

int sum_even(int n)
{
	int i = 0;
	int somme = 0;
	while(i < n +1)
	{
		if(i % 2 == 0)
		{
			somme += i;
		}
		i++;
	}
	return somme;
}
