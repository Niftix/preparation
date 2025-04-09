#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* ft_strdup(char *src);
int ft_strlen(char* src);

int main(void)
{
	char src[] = "Hello";
	char *mallocchaine = ft_strdup(src);
	printf("%s\n",mallocchaine);
	free(mallocchaine);
	return 0;

}

int ft_strlen(char* src)
{
	int i = 0;
	while(src[i])
	{
		i++;
	}
	return i;
}

char *ft_strdup(char *src)
{
	int taille = ft_strlen(src);
	char *new = malloc(sizeof(char) * taille + 1);
	if(!new)
	{
		return (NULL);
	}
	int i = 0;
	while(src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return new;
}
