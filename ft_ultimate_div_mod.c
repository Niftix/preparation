/*#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a = 9;
	int b = 2;
	ft_ultimate_div_mod(&a,&b);
	printf("%d, %d\n", a,b);
	return 0;
}
*/
void ft_ultimate_div_mod(int *a, int *b)
{
	int div = 0;
	int mod = 0;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
