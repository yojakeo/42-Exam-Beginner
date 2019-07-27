/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:34:50 by exam              #+#    #+#             */
/*   Updated: 2019/07/23 12:23:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			++i;
		while (av[1][i])
		{
			while (av[1][i + 1] == ' ' || av[1][i + 1] == '\t')
                ++i;
			write(1, " ", 1);
			while (!(av[1][i] == ' ' || av[1][i + 1] == '\t') && av[1][i])
				write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}