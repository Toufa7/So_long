/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:47:20 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/25 19:13:32 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	checking(char *av[])
{
	if (final_check(av) == 1)
	{
		perror("Map Not Valid\n");
		exit(EXIT_FAILURE);
	}
	if (open(av[1], O_RDWR, 0777) == -1)
		print_error("Error\n");
	checking_ber(av);
}

void	xpm_images(void)
{
	img.box = "./sprites/box.xpm";
	img.snk_r = "./sprites/right.xpm";
	img.snk_l = "./sprites/left.xpm";
	img.snk_t = "./sprites/top.xpm";
	img.snk_d = "./sprites/snake_down.xpm";
	img.snk_na_r = "./sprites/snake_near_right.xpm";
	img.snk_na_l = "./sprites/snake_near_left.xpm";
	img.snk_na_d = "./sprites/snake_near_down.xpm";
	img.snk_na_u = "./sprites/snake_near_up.xpm";
	img.apple = "./sprites/apple.xpm";
	img.apple_d = "./sprites/appel_down.xpm";
	img.apple_u = "./sprites/appel_up.xpm";
	img.bkgd = "./sprites/background.xpm";
	img.cave = "./sprites/cave.xpm";
}

void	*window(t_mlx *mlx)
{
	int		height;
	int		width;
	void	*win;

	height = height_width(mlx->map, 'H');
	width = height_width(mlx->map, 'W');
	win = mlx_new_window(mlx->mlx, width * 60, height * 60, "So_long");
	return (win);
}

void	xpm_to_image(t_mlx *mlx)
{
	int		w;
	int		h;

	x_img.box = mlx_xpm_file_to_image(mlx->mlx, img.box, &w, &h);
	x_img.snk_r = mlx_xpm_file_to_image(mlx->mlx, img.snk_r, &w, &h);
	x_img.snk_l = mlx_xpm_file_to_image(mlx->mlx, img.snk_l, &w, &h);
	x_img.snk_d = mlx_xpm_file_to_image(mlx->mlx, img.snk_d, &w, &h);
	x_img.snk_t = mlx_xpm_file_to_image(mlx->mlx, img.snk_t, &w, &h);
	x_img.apple = mlx_xpm_file_to_image(mlx->mlx, img.apple, &w, &h);
	x_img.bkgd = mlx_xpm_file_to_image(mlx->mlx, img.bkgd, &w, &h);
	x_img.cave = mlx_xpm_file_to_image(mlx->mlx, img.cave, &w, &h);
}

int	main(int ac, char *av[])
{
	t_mlx	mlx;

	if (ac == 2)
	{
		checking(av);
		xpm_images();
		mlx.map = ft_split(map_reading(open(av[1], O_RDWR, 0777)), '\n');
		mlx.mlx = mlx_init();
		mlx.win = window(&mlx);
		xpm_to_image(&mlx);
		mlx.appels = nbr_of_appels(mlx.map);
		mlx.app = malloc (mlx.appels * sizeof(t_appel));
		get_player_positions(&mlx);
		map_filling(&mlx);
		mlx_key_hook(mlx.win, get_keys_bonus, &mlx);
		mlx.app_num = mlx.appels;
		mlx_loop_hook(mlx.mlx, &animation, &mlx);
		mlx_hook(mlx.win, 17, 0, close_window, &mlx);
		mlx_loop(mlx.mlx);
		free(mlx.app);
		while (1);
	}
	else
		ft_putstr("Please provide So_long program & valid map only");
}
