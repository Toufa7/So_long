/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reading.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:24:34 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/21 01:24:35 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_checking.h"

char	*map_reading(int fd)
{
	char	*map;
	char	*joining;

	if (fd == -1)
	{
		perror("Error\n");
		exit(EXIT_FAILURE);
	}
	joining = NULL;
	map = get_next_line(fd);
	while (map)
	{
		joining = ft_strjoin(joining, map);
		map = get_next_line(fd);
	}
	return (joining);
}
