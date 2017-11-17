/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:49:35 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/17 12:25:51 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char	*s = (const char *)src;
	char		*d;

	d = (char *)dst;
	while (n > 0)
	{
		if ((*(d++) = *(s++)) == (unsigned char)c)
			return (void *)(d);
		--n;
	}
	return (NULL);
}
