/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:13:29 by exam              #+#    #+#             */
/*   Updated: 2019/07/23 10:21:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r'|| str[i] == '\b')
        ++i;
    if (str[i] == '+' || str[i] == '-')
        if (str[i++] == '-')
            sign = -1;
    while (str[i] >= '0' && str[i] <= '9')
        res = (res * 10) + (str[i++] - '0');
    return (res * sign);
}

void print_hex(int num)
{
	char res[7] = { 0 };

}

int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
