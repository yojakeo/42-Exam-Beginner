/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 09:53:49 by exam              #+#    #+#             */
/*   Updated: 2019/07/09 10:43:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define ISLALPHA(x) x >= 'a' && x <= 'z'

void	putchar(int c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i = 0;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		if (av[1][i] == '_')
			++i;
		if (ISLALPHA(av[1][i]) && av[1][i - 1] == '_')
			putchar(av[1][i] - 32);
		else
			putchar(av[1][i]);
		++i;
	}
	write(1, "\n", 1);
	return (0);
}
