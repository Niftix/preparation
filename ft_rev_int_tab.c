#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tableau[4]= {2,4,6,8};
	int taille = 3;
	ft_rev_int_tab(tableau, taille);
	return 0;
}

void ft_rev_int_tab(int *tab, int size)
{
	while(size >= 0)
	{
		printf("%d", tab[size]);
		size--;
	}
}
