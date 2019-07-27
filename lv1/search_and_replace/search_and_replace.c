/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 09:07:12 by exam              #+#    #+#             */
/*   Updated: 2019/07/23 09:17:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = -1;
	if (ac == 4 && !av[2][1] && !av[3][1])
	{
		while (av[1][++i])
		{
			if (av[1][i] == av[2][0])
				write(1, &av[3][0], 1);
			else
				write(1, &av[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}