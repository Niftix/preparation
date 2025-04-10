#include <unistd.h>

void ft_print_comb2(void);
void ft_print(char d1, char u1, char d2, char u2);

int main()
{
	ft_print_comb2();
	return 0;
}

void ft_print(char d1, char u1, char d2, char u2)
{
		write(1,&d1,1);
		write(1,&u1,1);
		write(1," ",1);
		write(1,&d2,1);
		write(1,&u2,1);
		if(!(d1 == '9' && u1 == '9' && d2 == '9' && u2 == '9'))
		{
		write(1,", ",1);
		}
}

void ft_print_comb2(void)
{
	char d1,u1,d2,u2;
	for(d1 = '0'; d1 <= '9'; d1++)
	{
		for(u1 = '0'; u1 <= '9'; u1++)
		{
			for(d2 = '0'; d2 <= '9'; d2++)
			{
				for(u2 = '0'; u2 <= '9'; u2++)
				{
				ft_print(d1,u1,d2,u2);
				}
			}
		}
	}
}
