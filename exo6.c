#include <unistd.h>
/*
void ft_print_comb2(void);
void ft_print(int d, int c);

int main()
{
	ft_print_comb2();
	return 0;
}
*/
void ft_print(int d, int c)
{
	char d1,u1,d2,u2;
	d1 = d / 10 + '0';
	u1 = d % 10 + '0';
	d2 = c / 10 + '0';
	u2 = c % 10 + '0';

		write(1,&d1,1);
		write(1,&u1,1);
		write(1," ",1);
		write(1,&d2,1);
		write(1,&u2,1);
		if(!(d1 == '9' && u1 == '8'&& d2 == '9' && u2 == '9'))
		{
		write(1,", ",2);
		}
}

void ft_print_comb2(void)
{
	int d,c;
	for(d = 0; d <= 99; d++)
	{
		for(c = 0; c <= 99; c++)
		{	
			if(d < c)
			{
				ft_print(d,c);
			}
		}
	}
}
