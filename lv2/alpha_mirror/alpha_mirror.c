#include <unistd.h>

void putchar(int c)
{
	write(1, &c, 1);
}

int mirror(int c)
{
	int ret = 0;
	if (c >= 'a' && c <= 'm')
	{
		ret = (c - 'n') * 2 + 1;
		ret = -ret;
		return (ret);
	}
	else if (c >= 'n' && c <= 'z')
	{
		ret = (c - 'm') * 2 - 1;
		ret = -ret;
		return (ret);
	}
	else if (c >= 'A' && c <= 'M')
	{
		ret = (c - 'N') * 2 + 1;
		ret = -ret;
		return (ret);
	}
	else
	{
		ret = (c - 'M') * 2 - 1;
		ret = -ret;
	}
	return (ret);
}

int main (int ac, char **av)
{
	int i = -1;
	int diff = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	while (av[1][++i])
	{
		if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
		{
			diff = mirror(av[1][i]);
			putchar(av[1][i] + diff);
		}
		else
			putchar(av[1][i]);
	}
	putchar('\n');
	return (0);
}
