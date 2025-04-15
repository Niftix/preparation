void ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int x;
	x = size - 1;
	int stock;
	int stack;

	while(i < size)
	{
		while(x >= i)
		{
			if(tab[i] > tab[x])
			{
				stock = tab[i];
				stack = tab[x];
				tab[i] = stack;
				tab[x] = stock;
			}
			x--;
		}
		i++;
		x = size - 1;
	}
}
