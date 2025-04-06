#include <stdio.h>

int is_even(int nombre);

int main(void)
{
	int nombre = 36;
	int resultat = is_even(nombre);
	if(resultat == 1)
	{
		printf("Pair\n");
	}
	else
	{
		printf("Impair\n");
	}
	return 0;
}

int is_even(int nombre)
{
	if(nombre % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
