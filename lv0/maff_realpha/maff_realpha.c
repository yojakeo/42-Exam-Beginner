#include <unistd.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int i = 123;
	
	while (--i >= 97)
	{	
		if (i % 2)
			ft_putchar(i - 32);
		else
			ft_putchar(i);
	}
	write(1, "\n", 1);
	return 0;
	
}
