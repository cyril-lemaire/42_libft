/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:15:51 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/24 19:03:12 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*buffer;
	const char		*s;
	char			*d;
	size_t			i;

	if (d < s || d > s + len)
		return ft_memcpy(dst, src,)
	d = (char *)dst;
	s = (const char*)src;
	buffer = (char*)malloc(ft_strlen(s) * sizeof(char));
	i = -1;
	while (s[i++] != '\0' && s)
		buffer[i] = s[i];
	ft_memcpy(dst, buffer, len);
	free(buffer);
	return (dst);
}
