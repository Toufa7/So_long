/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_ber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:16:44 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/22 16:59:27 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	checking_ber(char *av[])
{
	int	i;

	i = 0;
	while (av[1][i])
		i++;
	if (ft_strcmp(&av[1][i - 4], ".ber") != 0)
	{
		perror("This is not a format of map");
		exit(EXIT_FAILURE);
	}
	else
		return ;
}
