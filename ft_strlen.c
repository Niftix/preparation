#include <stdio.h>

int ft_strlen(char *chaine);

int main()
{
	char chaine[] = "Hello";
	int taille;
	taille = ft_strlen(chaine);
	printf("%s %d \n",chaine, taille);
	return 0;
}

int ft_strlen(char* chaine)
{
	int i = 0;
	while(chaine[i] != '\0')
	{
		i++;
	}
	return i;
}


