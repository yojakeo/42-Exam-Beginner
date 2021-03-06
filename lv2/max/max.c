/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 09:29:55 by exam              #+#    #+#             */
/*   Updated: 2019/07/09 09:49:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int				inttop = 0;
	unsigned int	i = 0;

	while (i < len)
	{
		if (tab[i] > inttop)
			inttop = tab[i];
		++i;
	}
	return (inttop);
}
