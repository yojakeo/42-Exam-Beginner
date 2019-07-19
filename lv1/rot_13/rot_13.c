#include <unistd.h>

void putchar(int c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	if (ac != 2)
	{
		putchar('\n');
		return 0;
	}
	i = -1;
	while (av[1][++i])
	{
		if ((av[1][i] >= 'a' && av[1][i] <= 'm') || (av[1][i] >= 'A' && av[1][i] <= 'M'))
			putchar(av[1][i] + 13);
		else if ((av[1][i] >= 'n' && av[1][i] <= 'z') || (av[1][i] >= 'N' && av[1][i] <= 'Z'))
			putchar(av[1][i] - 13);
		else
			putchar(av[1][i]);
	}
	putchar('\n');
	return 0;
}
