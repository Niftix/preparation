/*#include <stdio.h>

char *ft_strcpy(char *dest,char *src);

int main()
{
char chaine[] = "Salut";	
char chone[] = "Bonjour";
ft_strcpy(chaine, chone);
printf("Chaine = %s", chaine);
return 0;
}
*/

char *ft_strcpy(char *dest,char *src)
{
	int i = 0;
	while( src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
