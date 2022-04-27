/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_so_long.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:50:38 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/27 14:50:39 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_SO_LONG_H
# define GNL_SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFFER_SIZE 10

size_t	gt_strlen(char *str);
size_t	ft_find_len(char *str, char what);
char	*ft_strchar(char *str, char what);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_substr(char *str, size_t start, size_t how);
char	*cutting_until_newline(char *str);
char	*keeping_what_after_newline(char *str);
char	*read_and_join(int fd, char *save);
char	*get_next_line(int fd);

#endif
