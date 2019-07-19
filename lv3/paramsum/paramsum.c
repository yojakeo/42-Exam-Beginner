/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:51:09 by exam              #+#    #+#             */
/*   Updated: 2019/07/09 11:20:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}

void putnbr(int nbr)
{
	int num = nbr;
	if (num > 10)
	{
		putnbr(num / 10);
		putnbr(num % 10);
	}
	else
		ft_putchar(num + 48);
}

int main(int ac, char **av)
{
	int count = ac - 1;
	putnbr(count);
	write(1, "\n", 1);
	(void)av;
	return 0;
}
