/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   appels_animation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:50:35 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/24 01:10:12 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	appels_movin(t_mlx *mlx)
{
	int	w;
	int	h;

	x_img.apple_d = mlx_xpm_file_to_image(mlx->mlx, img.apple_d, &w, &h);
	x_img.apple_u = mlx_xpm_file_to_image(mlx->mlx, img.apple_u, &w, &h);
}

void	stop_animation(t_mlx *mlx, int k)
{
	if (mlx->px == mlx->app[k].x && mlx->app[k].y == mlx->py)
	{
		printf("This is x -> %d this is y %d\n", mlx->px, mlx->py);
		if (mlx->px + 1 && mlx->py == mlx->py)
		{
			mlx_put_image_to_window(mlx->mlx, mlx->win, x_img.snk_r,
				mlx->px * 60, mlx->py * 60);
		}
		else
		{
			mlx_put_image_to_window(mlx->mlx, mlx->win, x_img.snk_l,
				mlx->px * 60, mlx->py * 60);
		}
		mlx->app[k].x = -1;
		mlx->app[k].y = -1;
	}
}

int	animation(t_mlx *mlx)
{
	static int	i = 0;
	int			k;

	k = 0;
	appels_movin(mlx);
	while (k < mlx->app_num)
	{
		if (mlx->app[k].x != -1 && i++ < 50)
		{
			mlx_put_image_to_window(mlx->mlx, mlx->win, x_img.apple_u,
				mlx->app[k].x * 60, mlx->app[k].y * 60);
		}
		if (mlx->app[k].x != -1 && i++ <= 100 && i >= 50)
		{
			mlx_put_image_to_window(mlx->mlx, mlx->win, x_img.apple_d,
				mlx->app[k].x * 60, mlx->app[k].y * 60);
			if (i == 100)
				i = 0;
		}
		stop_animation(mlx, k);
		k++;
	}
	return (0);
}
