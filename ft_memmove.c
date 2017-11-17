/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:15:51 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/17 16:39:09 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*buffer;
	const char		*s;
	char			*d;
	unsigned int	i;

	if ((unsigned long)(dst) - (unsigned long)(src) >= len)
		return ft_memcpy(dst, src, len);
	d = (char *)dst;
	s = (const char *)src;
	buffer = (char *)malloc(ft_strlen(s) * sizeof(char));
	i = -1;
	while (s[i++] != '\0')
		buffer[i] = s[i];
	ft_memcpy(dst, buffer, len);
	free(buffer);
	return (dst);
}
