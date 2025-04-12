#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tableau[4] = {2,4,6,8};
	int taille = 4;
	ft_rev_int_tab(tableau, taille);
	return 0;
}
void ft_rev_int_tab(int *tab, int size)
{

	int i;
	int fin;
	int debut;
	int sizemove;
	sizemove = size;
	for(i = 0; i < size / 2; i++)
	{
		sizemove--;
		fin = tab[sizemove];
		debut = tab[i];
		tab[i] = fin;
		tab[sizemove] = debut;	
	}
}
