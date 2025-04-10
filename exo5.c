#include <unistd.h>
/*
void ft_print_comb(void);

int main()
{
	ft_print_comb();
	return 0;
}
*/
void ft_print_comb(void)
{
	char c,d,u;


for(c = '0'; c <= '9'; c++)
{
	for(d = '0'; d <= '9'; d++)
	{
	
		for(u = '0'; u <= '9'; u++)
		{
			if(c < d && d < u && c != d && d!= u && c != u)
			{
			write(1,&c,1);
			write(1,&d,1);
			write(1,&u,1);
			write(1,", ",2);
			}
		}
	}
}
}
