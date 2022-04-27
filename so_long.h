/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 02:00:15 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/27 14:50:25 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>
# include "gnl_so_long/gnl_so_long.h"
# include "./libft/libft.h"
# include "./map_checking/map_checking.h"

struct s_images
{
	char	*box;
	char	*snk_r;
	char	*snk_l;
	char	*snk_d;
	char	*snk_t;
	char	*apple;
	char	*apple_u;
	char	*apple_d;
	char	*bkgd;
	char	*cave;
	char	*snk_na_r;
	char	*snk_na_l;
	char	*snk_na_u;
	char	*snk_na_d;
	char	*enemy;
}	img;

struct s_xpm_images
{
	void	*box;
	void	*snk_r;
	void	*snk_l;
	void	*snk_d;
	void	*snk_t;
	void	*apple;
	void	*apple_u;
	void	*apple_d;
	void	*bkgd;
	void	*cave;
	void	*snk_na_r;
	void	*snk_na_l;
	void	*snk_na_u;
	void	*snk_na_d;
	void	*enemy;
}	x_img;

struct s_sizes
{
	int	height;
	int	width;
}	sizes;

typedef struct s_appel
{
	int	x;
	int	y;
}	t_appel;

typedef struct s_window
{
	int	w;
	int	h;
}	t_win;

typedef struct s_mlx
{
	t_appel	*app;
	void	*mlx;
	void	*win;
	char	**map;
	int		px;
	int		py;
	int		appels;
	int		nbr;
	int		app_num;
}	t_mlx;

void	map_filling(t_mlx *mlx);
void	get_player_positions(t_mlx *mlx);
int		nbr_of_appels(char **map);
void	move_left(t_mlx	*mlx);
void	move_right(t_mlx	*mlx);
void	move_down(t_mlx	*mlx);
void	move_up(t_mlx	*mlx);
void	putting_moves_into_windows_bonus(t_mlx *mlx);
void	check_and_exit(t_mlx *mlx);
void	checking_ber(char	*av[]);
void	exit_window(t_mlx	*mlx);
void	print_error(const char *s);
int		get_keys(int key, t_mlx *mlx);
int		close_window(t_mlx *mlx);
int		animation(t_mlx *mlx);
void	putting_moves_into_term(t_mlx *mlx);
int		get_keys_bonus(int key, t_mlx *mlx);
void	get_appels_positions_bonus(t_mlx *mlx);

#endif 
