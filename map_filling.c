/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_filling.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:36:06 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/21 01:36:07 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_filling(t_mlx	*mlx)
{
	int		j;
	int		i;
	void	*m;

	i = 0;
	m = mlx->win;
	while (mlx->map[i])
	{
		j = 0;
		while (mlx->map[i][j])
		{
			if (mlx->map[i][j] == '1')
				mlx_put_image_to_window(mlx, m, x_img.box, j * 60, i * 60);
			else if (mlx->map[i][j] == 'P')
				mlx_put_image_to_window(mlx, m, x_img.snk_r, j * 60, i * 60);
			else if (mlx->map[i][j] == 'C')
				mlx_put_image_to_window(mlx, m, x_img.apple, j * 60, i * 60);
			else if (mlx->map[i][j] == '0')
				mlx_put_image_to_window(mlx, m, x_img.bkgd, j * 60, i * 60);
			else if (mlx->map[i][j] == 'E')
				mlx_put_image_to_window(mlx, m, x_img.cave, j * 60, i * 60);
			j++;
		}
		i++;
	}
}
