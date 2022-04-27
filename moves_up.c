/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:21:39 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/22 16:21:40 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	snake_near_appel_u(t_mlx	*mlx)
{
	int	x;
	int	y;

	x_img.snk_na_u = mlx_xpm_file_to_image(mlx->mlx, img.snk_na_u, &x, &y);
}

void	move_up(t_mlx	*mlx)
{
	snake_near_appel_u(mlx);
	mlx->map[mlx->py][mlx->px] = mlx->map[mlx->py - 1][mlx->px];
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
			x_img.snk_t, mlx->px * 60, --mlx->py * 60);
		if (mlx->map[mlx->py - 1][mlx->px] == 'C')
		{
			mlx_put_image_to_window(mlx->mlx, mlx->win,
				x_img.bkgd, mlx->px * 60, mlx->py * 60);
			mlx_put_image_to_window(mlx->mlx, mlx->win,
				x_img.snk_na_u, mlx->px * 60, mlx->py * 60);
		}
		mlx->nbr++;
	}
}
