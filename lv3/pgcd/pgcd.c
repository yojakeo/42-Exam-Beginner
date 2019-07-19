#include <stdlib.h>
#include <stdio.h>

int main (int ac, char **av)
{
	if (ac != 3)
	{
		printf("%s", "\n");
		return (0);
	}
	int i = 1;
	int res = 0;
	int nbr1 = atoi(av[1]);
	int nbr2 = atoi(av[2]);
	while (i)
	{
		if (i > nbr1 || i > nbr2)
			break;
		if ((nbr1 % i) == 0 && (nbr2 % i) == 0)
			res = i;
		++i;
	}
	printf("%d", res);
	printf("%s", "\n");
	return (0);
}
