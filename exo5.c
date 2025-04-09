#include <unistd.h>

void ft_print_comb(void);

int main()
{
	ft_print_comb();
	return 0;
}

void ft_print_comb(void)
{
	int c;
	int d;
	int u;
for(c = 0; c <=7; c++)
{
	write(1,&c,1);
	for(d = 1; d <= 8; d++)
	{
		write(1,&d,1);
		for(u = 2; u <= 9; u++)
		{
			write(1,&u,1);
		}
	}
}
}
