#include <stdio.h>
#include "intmax.h"

void intmax(int a, int b)
{
	if(a > b)
	{
		printf("A est plus grand que B\n");
	}
	else if(a < b)
	{
		printf("B est plus grand que A\n");
	}
	else if(a = b)
	{
		printf("A est egale a B\n");
	}
}
