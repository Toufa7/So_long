/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putting_moves_into_term.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:13:05 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/22 16:13:07 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	putting_moves_into_term(t_mlx *mlx)
{
	char	*nbr;

	nbr = ft_itoa(mlx->nbr);
	ft_putstr(nbr);
	free (nbr);
}
