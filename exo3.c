#include <unistd.h>

void ft_reverse_alphabet(void)
{
<<<<<<< HEAD
	write(1,"zxywvutsrqpomnlkjihgfedcba",26);
=======
	char c = 'z';
	while(c > 'a' - 1)
	{
	write(1,&c,1);
	c--;
	}
>>>>>>> 5ae2f2f (d)
}

