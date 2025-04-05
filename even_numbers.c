#include <stdio.h>

int main(void)
{
	int n = 10;
	int i = 0;
	while(i < n + 1)
	{
		if(i % 2 == 0)
		{
		printf("%d\n",i);
		i++;
		}
		else
		{
			i++;
		}
	}
	return 0;
}
