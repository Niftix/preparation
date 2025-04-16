#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main ()
{
	char chaine[] = "Salut";
	char choune[] = "abc";
	int n;
        n = 5;
	ft_strncpy(chaine, choune, n);
	printf("%s", chaine);
	return 0;
	
}
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	while(i < n)
	{
		if(src[i] != '\0')
		{
			dest[i] = '\0';
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

