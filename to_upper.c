#include <stdio.h>

void to_upper(char* chaine);

int main(void)
{
	char chaine[] = "hello";
	to_upper(chaine);
	printf("%s\n",chaine);
	return 0;
}

void to_upper(char* chaine)
{
	int max = 122;
	int min = 97;
	int i = 0;
	while(chaine[i] != '\0')
	{
		if(chaine[i] >= min && chaine[i] <= max)
		{
		chaine[i] -= 32;
		}
		i++;
	}
}

