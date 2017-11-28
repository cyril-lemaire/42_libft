/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:17:59 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/28 14:54:51 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	substr_count(char const *s, char c)
{
	int		res;

	res = 0;
	while (s != NULL)
	{
		while (*s != '\0' && *s == c)
			++s;
		res += (*s != '\0');
		s = ft_strchr(s, c);
	}
	return (res);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;

	arr = (char**)malloc((substr_count(s, c) + 1) * sizeof(char*));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			++s;
		j = 0;
		while (s[j] != '\0' && s[j] != c)
			++j;
		arr[i++] = (j == 0) ? 0 : ft_strsub(s, 0, j);
		s += j;
	}
	return (arr);
}
