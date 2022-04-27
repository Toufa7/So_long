/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:26:03 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/26 23:35:42 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void	ft_putstr(char *s);
char	*ft_itoa(int n);
char	**ft_split(char *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);

#endif
