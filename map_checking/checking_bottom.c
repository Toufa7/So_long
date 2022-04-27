/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_bottom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:23:40 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/21 01:23:42 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_checking.h"

int	checking_bottom(char **map)
{
	int	j;
	int	i;

	j = 0;
	while (map[j])
		j++;
	j = j - 1;
	i = 0;
	while (map[j][i])
	{
		if (map[j][i] != '1')
			return (1);
		i++;
	}
	return (0);
}
