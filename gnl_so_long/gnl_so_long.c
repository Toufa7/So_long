/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_so_long.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:50:31 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/27 14:50:33 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_so_long.h"

char	*cutting_until_newline(char *str)
{
	if (!str)
		return (NULL);
	return (ft_substr(str, 0, ft_find_len(str, '\n')));
}

char	*keeping_what_after_newline(char *str)
{
	size_t	idx;
	char	*remain;

	if (!str)
		return (NULL);
	idx = ft_find_len(str, '\n');
	remain = ft_substr(str, idx, gt_strlen(str) - idx);
	free(str);
	return (remain);
}

char	*read_and_join(int fildes, char *save)
{
	char	*buf;
	int		nbytes;

	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	nbytes = 1;
	while (!ft_strchar(save, '\n') && nbytes != 0)
	{
		nbytes = read(fildes, buf, BUFFER_SIZE);
		if (nbytes == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[nbytes] = '\0';
		save = ft_strjoin(save, buf);
	}
	free(buf);
	if (!save[0] && nbytes == 0)
	{
		free(save);
		return (NULL);
	}
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*saved;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	saved = read_and_join(fd, saved);
	if (!saved)
		return (NULL);
	line = cutting_until_newline(saved);
	saved = keeping_what_after_newline(saved);
	return (line);
}

// int main()
// {
// 	int i = 0;
// 	int fildes = open("/Users/otoufah/Desktop/So_long/maps/map.ber", O_RDONLY);
// 	while (i < 5)
// 	{
// 		printf("%s",get_next_line(fildes));
// 		i++;
// 	}
// }
