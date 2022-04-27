/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_right.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:24:02 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/21 01:24:03 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_checking.h"

int	checking_right(char **map)
{
	int	i;
	int	width;
	int	height;

	height = height_width(map, 'H');
	width = height_width(map, 'W') - 1;
	i = 0;
	while (i < height)
	{
		if (map[i][width] != '1')
			return (1);
		i++;
	}
	return (0);
}
