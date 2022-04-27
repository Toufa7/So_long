/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_so_long_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:50:42 by otoufah           #+#    #+#             */
/*   Updated: 2022/04/27 14:50:43 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_so_long.h"

size_t	gt_strlen(char *str)
{
	size_t	idx;

	if (!str[0])
		return (0);
	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

size_t	ft_find_len(char *str, char what)
{
	size_t	idx;

	if (!str[0])
		return (0);
	idx = 0;
	while (str[idx] != what && str[idx])
		idx++;
	return (idx + 1);
}

char	*ft_strchar(char *str, char character)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == character)
			return (&str[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*both;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	both = malloc(sizeof(char) * gt_strlen(s1) + gt_strlen(s2) + 1);
	if (!both)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		both[j++] = s1[i++];
	i = 0;
	while (s2[i])
		both[j++] = s2[i++];
	both[j] = '\0';
	return (both);
}

char	*ft_substr(char *str, size_t start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*sub;

	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	l = 0;
	while (str[i])
	{
		if (i >= start && l < len)
		{
			sub[l] = str[i];
			l++;
		}
		i++;
	}
	sub[l] = '\0';
	return (sub);
}
