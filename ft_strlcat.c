/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:23:46 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/24 11:33:59 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] != '\0' && i < size)
		++i;
	if (i == size)
		return (size);
	j = 0;
	while (src[j] != '\0' && j < size - i - 1)
	{
		dst[i + j] = src[j];
		++j;
	}
	dst[i + j] = '\0';
	return (i + j);
}
