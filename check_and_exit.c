/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:13:14 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/22 16:13:15 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_and_exit(t_mlx *mlx)
{
	if (mlx->map[mlx->py][mlx->px] == 'E' && mlx->appels == 0)
	{
		mlx_destroy_window(mlx->mlx, mlx->win);
		ft_putstr("You Win 🏆");
		exit(0);
	}
}
