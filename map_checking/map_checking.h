/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checking.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:24:29 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/21 01:24:30 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CHECKING_H
# define MAP_CHECKING_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>
# include "../libft/libft.h"
# include "../gnl_so_long/gnl_so_long.h"
# include "../map_checking/map_checking.h"

struct s_directions
{
	int	top;
	int	left;
	int	right;
	int	bottom;
	int	components;
}	directions;

int		checking_top(char **map);
int		checking_left(char **map);
int		checking_right(char **map);
int		checking_bottom(char **map);
int		checking_components(char *map);
int		final_check(char *av[]);
char	*map_reading(int fd);
int		height_width(char **twd, char c);

#endif
