/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_componenets.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:23:47 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/22 16:16:50 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_checking.h"

int	nbr_of_components(char *twd, char c)
{
	int	i;
	int	nbr;

	nbr = 0;
	i = 0;
	while (twd[i])
	{
		if (twd[i] == c)
		{
			nbr++;
		}
		i++;
	}
	return (nbr);
}

int	checking_components(char *map)
{
	int	i;
	int	coins;
	int	player;
	int	exit;

	coins = nbr_of_components(map, 'C');
	player = nbr_of_components(map, 'P');
	exit = nbr_of_components(map, 'E');
	i = 0;
	while (map[i])
	{
		if (coins == 0 || player != 1 || exit != 1)
			return (1);
		if (map[i] != '1' && map[i] != 'C' && map[i] != 'E' && map[i] != '0'
			&& map[i] != 'P' && map[i] != '\n')
			return (1);
		i++;
	}
	free (map);
	return (0);
}
