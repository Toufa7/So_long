/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_player_positions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:29:25 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/22 17:05:31 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	save(t_mlx	*mlx, int i, int j)
{
	mlx->px = j;
	mlx->py = i;
}

void	get_player_positions(t_mlx *mlx)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (mlx->map[i])
	{
		j = 0;
		while (mlx->map[i][j])
		{
			if (mlx->map[i][j] == 'P')
				save(mlx, i, j);
			if (mlx->map[i][j] == 'C')
			{
				mlx->app[k].x = j;
				mlx->app[k].y = i;
				k++;
			}
			j++;
		}
		i++;
	}
}
