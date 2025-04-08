#include <stdio.h>

int ft_strcmp(const char* chaine1, const char* chaine2);

int main(void)
{
	char chaine1[] = "hello";
	char chaine2[] = "hello";
	int resultat = ft_strcmp(chaine1, chaine2);
	if(resultat == 0)
	{
		printf("Identiques\n");
	}
	else
	{
		printf("Differentes\n");
	}
	return 0;
}

int ft_strcmp(const char* chaine1, const char* chaine2)
{
	int i = 0;
	while(chaine1[i] == chaine2[i] && chaine1[i] != '\0' && chaine2[i] != '\0')
	{
		i++;
	}
	if(chaine1[i] != chaine2[i])
	{
	return 1;
	}
	return 0;
}


