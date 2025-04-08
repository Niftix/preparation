#include <stdio.h>

void ft_strcpy(char* dest, char* src, int taillemax);

int main(void)
{
	char dest[6]; 
	char src[] = "Hello";
	int taillemax = 6;
	ft_strcpy(dest, src, taillemax);
	printf("%s\n", dest);
	return 0;
}

void ft_strcpy(char* dest, char* src, int taillemax)
{
	int i = 0;
	while(src[i] != '\0' && i < taillemax)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

}
