#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tableau[4] = {2,4,6,8};
	int taille = 3;
	ft_rev_int_tab(tableau, taille);
	return 0;
}
void ft_rev_int_tab(int *tab, int size)
{

	int i = 0;
	int sizemove;
	sizemove = size;
	int cro;
	int dec;
	for(i = 0; i > size / 2; i++)
	{
		cro = tab[i];
		dec = tab[sizemove];
		tab[sizemove] = cro;
		tab[i] = dec;
		sizemove--;
	}
}
