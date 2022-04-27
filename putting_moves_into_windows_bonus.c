/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putting_moves_into_windows.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:13:05 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/22 16:13:07 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	putting_moves_into_windows_bonus(t_mlx *mlx)
{
	char	*nbr;

	nbr = ft_itoa(mlx->nbr);
	mlx_put_image_to_window(mlx->mlx, mlx->win, x_img.box, 0, 0);
	mlx_string_put(mlx->mlx, mlx->win, 25, 19, 249, nbr);
	ft_putstr(nbr);
}
