#include <stdio.h>

int main(void)
{
	int n = 11;
	int i = 0;
	while(i < n)
	{
		printf("%d\n", i);
		if(i % 2 == 0)
		{
			i += 2;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}
