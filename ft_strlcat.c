/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:23:46 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/25 16:25:21 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	printf("strlcat(%s, %s, %lu)", dst, src, size);
	i = 0;
	while (dst[i] != '\0' && i < size)
		++i;
	printf("read %lu chars on s1\n", i);
	if (i == size)
		return (size);
	j = 0;
	while (src[j] != '\0' && j < size - i - 1)
	{
		dst[i + j] = src[j];
		++j;
	}
	dst[i + j] = '\0';
	printf("=> return value: a=%lu, b=%lu (%lu)\n", i, j, i + j);
	return (i + j);
}
