#include <stdio.h>
#include "intmax.h"

int main()
{
	int a;
	int b;
	printf("Indiquer la valeur de A\n");
	scanf("%d", &a);
	printf("Indiquer la valeur de B\n");
	scanf("%d", &b);
	intmax(a,b);
	return 0;
}

