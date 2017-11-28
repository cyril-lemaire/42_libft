/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 10:43:37 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/28 16:05:12 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	const size_t	src_len = ft_strlen(src);

	if (size == 0)
		return (0);
	i = 0;
	while (dst[i] != '\0' && i < size)
		++i;
	j = 0;
	while (j < src_len && i + j < size - 1)
	{
		dst[i + j] = src[j];
		++j;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + src_len);
}
