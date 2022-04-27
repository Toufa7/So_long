/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   height_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:24:20 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/21 01:24:21 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_checking.h"

int	height_width(char **twd, char c)
{
	int	i;
	int	j;

	i = 0;
	while (twd[i])
	{
		j = 0;
		while (twd[i][j])
		{
			j++;
		}
		if (c == 'W')
		{
			return (j);
		}
		i++;
	}
	return (i);
}
