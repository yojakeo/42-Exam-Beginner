/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:37:11 by japarbs           #+#    #+#             */
/*   Updated: 2019/07/22 16:58:25 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(int c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	i = -1;
	if (ac == 2)
	{
		while(av[1][++i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				putchar('_');
				putchar(av[1][i] + 32);
			}
			else
				putchar(av[1][i]);
		}
	}
	putchar('\n');
	return (0);
}