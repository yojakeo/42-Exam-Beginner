/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:24:02 by exam              #+#    #+#             */
/*   Updated: 2019/07/23 10:54:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int multi = 1;
	unsigned int multires = 0;
	unsigned int high;
	unsigned int low;

	if (!a || !b)
		return (0);
	if (a >= b)
	{
		high = a;
		low = b;
	}
	else
	{
		high = b;
		low = a;
	}
	while (multi <= low)
	{
		multires = low % multi;
		if (multires == 0)
			return (multi);
		++multi;
	}
	return (1);
}
