/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:23:57 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/21 01:23:58 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_checking.h"

int	checking_left(char **map)
{
	int	i;
	int	height;

	i = 0;
	height = height_width(map, 'H');
	while (i < height)
	{
		if (map[i][0] != '1')
			return (1);
		i++;
	}
	return (0);
}
