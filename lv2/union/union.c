#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	int i = -1;
	int bindex;
	char cpy[256];
	unsigned char temp[128];
	while (av[1][++i])
		cpy[i] = av[1][i];
	while (av[2][++i])
		cpy[i] = av[2][i];
	i = -1;
	while (cpy[++i])
	{
		bindex = cpy[i];
		if (temp[bindex] == 0)
		{
			write(1, &cpy[i], 1);
			temp[bindex] = 1;
		}
	}
    write(1, "\n", 1);
	return 0;
}
