/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 22:57:29 by japarbs           #+#    #+#             */
/*   Updated: 2019/07/22 17:18:33 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int word_count(char *str)
{
	int count = 0;
	int i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			++i;
		if (!(str[i] == ' ' && str[i] == '\t' && str[i] == '\n'))
			++count;
		while (!(str[i] == ' ' && str[i] == '\t' && str[i] == '\n'))
			++i;
	}
	return (count);
}
int word_len(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		++i;
	while (!(str[i] == ' ' && str[i] == '\t' && str[i] == '\n'))
	{
		++i;
		++count;
	}
	return (count);
}

char **ft_split(char *str)
{
	int DPi = 0;
	int i = 0;
	int j;
	char **res;
	if (!str || !(res = (char **)malloc(sizeof(char *) * word_count(str) + 1)))
		return (NULL);
	while (DPi < word_count(str))
	{
		j = 0;
		if (!(res[DPi] = (char *)malloc(word_len(str) + 1)))
			return (NULL);
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			++i;
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			res[DPi][j++] = str[i++];
		res[DPi][j] = '\0';
		++DPi;
	}
	res[DPi] = NULL;
	return (res);

}

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		++i;
	return (0);
}

int main(int ac, char **av)
{
	char **test;
	int i = 0;
	(void)ac;
	test = ft_split(av[1]);
	while (test[i])
	{
		write(1, test[i], ft_strlen(test[i]));
		++i;
	}
}