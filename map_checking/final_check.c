/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:24:14 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/21 01:24:17 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_checking.h"

void	error_msg(const char *s)
{
	perror(s);
	exit(EXIT_FAILURE);
}

int	final_check(char *argv[])
{
	int		fildes;
	int		filde;
	char	**twd;

	fildes = open(argv[1], O_RDWR, 0777);
	filde = open(argv[1], O_RDWR, 0777);
	if (fildes == -1 || filde == -1)
		error_msg("Error\n");
	twd = ft_split(map_reading(fildes), '\n');
	directions.components = checking_components(map_reading(filde));
	directions.top = checking_top(twd);
	directions.left = checking_left(twd);
	directions.right = checking_right(twd);
	directions.bottom = checking_bottom(twd);
	filde = -1;
	while (twd[++filde])
		free (twd[filde]);
	free (twd);
	if (directions.bottom == 0 && directions.top == 0 && directions.left == 0
		&& directions.right == 0 && directions.components == 0)
	{
		return (0);
	}
	return (1);
}
