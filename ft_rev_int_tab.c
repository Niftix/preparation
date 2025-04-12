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
	while(i <= size)
	{
		tableau[i] = tab[i];
		i++;

	}
	sizemove = size
	i = 0;
	while(i <= size)
	{
		tab[i] = tableau[sizemove];
		printf("%d\n", tab[sizemove];
		i++;
		sizemove--;
	}
