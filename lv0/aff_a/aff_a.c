#include <unistd.h>

int		main (int ac, char **argv)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 2);
		return 0;
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
		{
			write(1, &argv[1][i], 1);
			write(1, "\n", 2);
			return 0;
		}
		i++;
	}
	write(1, "\n", 2);
}
