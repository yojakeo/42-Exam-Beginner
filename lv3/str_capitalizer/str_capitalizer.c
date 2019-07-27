/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:57:13 by exam              #+#    #+#             */
/*   Updated: 2019/07/23 11:30:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(int c)
{
	write(1, &c, 1);
}

void str_capitalizer(char *str)
{
	int i = 0;
	
	if (str[0] >= 'a' && str[0] <= 'z')
		putchar(str[0] - 32);
	else
		putchar(str[0]);
	while (str[++i])
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t') && str[i] >= 'a' && str[i] <= 'z')
			putchar(str[i] - 32);
		else if (!(str[i - 1] == ' ' || str[i - 1] == '\t') && str[i] >= 'A' && str[i] <= 'Z')
			putchar(str[i] + 32);
		else
			putchar(str[i]);
	}
}

int main(int ac, char **av)
{
    int i = 0;
    if (ac >= 2)
    {
        while (av[++i][0])
        {
            str_capitalizer(av[i]);
            putchar('\n');
        }
    }
    return (0);
}
