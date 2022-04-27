/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_keys.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 01:02:13 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/24 01:02:14 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	get_keys_bonus(int key, t_mlx *mlx)
{
	if (key == 124 || key == 2)
	{
		move_right(mlx);
		check_and_exit(mlx);
	}
	if (key == 123 || key == 0)
	{
		move_left(mlx);
		check_and_exit(mlx);
	}
	if (key == 126 || key == 13)
	{
		move_up(mlx);
		check_and_exit(mlx);
	}
	if (key == 125 || key == 1)
	{
		move_down(mlx);
		check_and_exit(mlx);
	}
	if (key == 53)
		exit_window(mlx);
	putting_moves_into_windows_bonus(mlx);
	return (key);
}
