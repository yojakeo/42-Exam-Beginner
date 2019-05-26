#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return 0;
	}
	int i = -1;
	char cpy[256];
	unsigned char temp[128];
	while (av[1][++i])
	{
		bindex = av[1][i];
		if (temp[av[1][i]] == 0)
			temp[bindex] = 1;
	}
	i = -1;
	while (av[2][++i])
	{
		bindex = av[2][i];
		if (temp[bindex] == 0)
			temp[bindex] = 1;
	}
	i = -1;
	while (av[1][++i])
	{
		bindex = av[1][i];
		if (temp[bindex] == 1)
		{
			ft_putchar(av[1][i]);
			temp[bindex] = 0;
		}
	}
	i = -1;
   	while (av[2][++i])
    {
		bindex = av[2][i];
        if (temp[bindex] == 1)
        {
            ft_putchar(av[2][i]);
            temp[bindex] = 0;
        }
    }
    ft_putchar('\n');
	return 0;
}
