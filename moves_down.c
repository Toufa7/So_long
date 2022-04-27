/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:21:16 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/24 01:14:32 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	snake_near_appel_d(t_mlx	*mlx)
{
	int	x;
	int	y;

	x_img.snk_na_d = mlx_xpm_file_to_image(mlx->mlx, img.snk_na_d, &x, &y);
}

void	move_down(t_mlx	*mlx)
{
	snake_near_appel_d(mlx);
	mlx->map[mlx->py][mlx->px] = mlx->map[mlx->py + 1][mlx->px];
	if (mlx->map[mlx->py][mlx->px] == '0' || mlx->map[mlx->py][mlx->px] == 'C'
		|| mlx->map[mlx->py][mlx->px] == 'P')
	{
		if (mlx->map[mlx->py][mlx->px] == 'C')
		{
			mlx->map[mlx->py][mlx->px] = '0';
			mlx->appels -= 1;
		}
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			x_img.bkgd, mlx->px * 60, mlx->py * 60);
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			x_img.snk_d, mlx->px * 60, ++mlx->py * 60);
		if (mlx->map[mlx->py + 1][mlx->px] == 'C')
		{
			mlx_put_image_to_window(mlx->mlx, mlx->win, x_img.bkgd,
				mlx->px * 60, mlx->py * 60);
			mlx_put_image_to_window(mlx->mlx, mlx->win,
				x_img.snk_na_d, mlx->px * 60, mlx->py * 60);
		}
		mlx->nbr++;
	}
}
