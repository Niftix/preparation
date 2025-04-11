#include <stdio.h>
#include <unistd.h>
/*
void ft_putstr(char *str);

int main(void)
{
	char chaine[] = "Salut";
	ft_putstr(chaine);
	return 0;
}
*/
void ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}
