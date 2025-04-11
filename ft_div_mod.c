/*#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a = 9;
	int b = 2;
	int div = 0;
	int mod = 0;
	printf("a = %d,b = %d, %d = div, %d = mod\n",a,b, div, mod);
	ft_div_mod(a,b,&div,&mod);
	printf("a = %d,b = %d, %d = div, %d = mod\n",a,b, div, mod);
	return 0;

}*/

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
