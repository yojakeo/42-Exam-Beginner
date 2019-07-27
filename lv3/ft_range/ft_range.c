/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 09:44:33 by exam              #+#    #+#             */
/*   Updated: 2019/07/23 10:10:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int num = start;
	unsigned int count = 0;
	unsigned int index = 0;
	int *res;

	if (start > end)
		return (NULL);
	while (num <= end)
	{
		++num;
		++count;
	}
	if (!(res = (int *)malloc(sizeof(int *) * count)))
		return (NULL);
	num = start;
	while (index <= count)
		res[index++] = num++;
	return (res);
}
