/*#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tableau[4] = {2,4,6,8};
	int taille = 3;
	ft_rev_int_tab(tableau, taille);
	return 0;
}
*/
void ft_rev_int_tab(int *tab, int size)
{

	int tableau[4] = {210,410,5,9};
	int i = 0;
	int sizemove;
	sizemove = size;
	while(i <= size)
	{
		tableau[i] = tab[sizemove];
		i++;
		sizemove--;

	}
	sizemove = 0;
	i = size;
	while(sizemove <= size)
	{
		tab[sizemove] = tableau[i];
		i--;
		sizemove++;
	}
}
