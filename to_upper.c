#include <stdio.h>

void to_upper(char* chaine);

int main(void)
{
	char chaine[] = "hello";
	to_upper(chaine);
	printf("%s",chaine);
	return 0;
}

void to_upper(char* chaine)
{
	int i = 0;
	while(chaine[i] != '\0')
	{
		chaine[i] -= 32;
		i++;
	}
}

