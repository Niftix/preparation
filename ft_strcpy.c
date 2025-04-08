#include <stdio.h>

void ft_strcpy(char* dest, char* src);

int main(void)
{
	char dest[6]; 
	char src[] = "Hello";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return 0;
}

void ft_strcpy(char* dest, char* src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

}
