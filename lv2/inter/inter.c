#include <unistd.h>

int	main(int ac, char **av)
{
	int		i = 0;
	int		j;
	int		bindex = 0;
	char	barr[128];
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		bindex = av[1][i];
		j = -1;
		while (barr[bindex] != 1)
		{
			if (av[1][i] == av[2][++j])
			{
				barr[bindex] = 1;
				write(1, &av[1][i], 1);
			}
			if (!av[2][j])
				break ;
		}
		++i;
	}
	write(1, "\n", 1);
}
