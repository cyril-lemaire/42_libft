/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:27:16 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/25 10:54:40 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int					i;
	const unsigned char	*char_ptr;
	const unsigned char	*lim;
	const unsigned char	c_char = (unsigned char)c;

	i = 0;
	char_ptr = (const unsigned char *)s;
	lim = char_ptr + n;
	while (char_ptr < lim && *char_ptr != '\0' && *char_ptr != c_char)
		++char_ptr;
	return (*char_ptr == c_char ? (void *)char_ptr : NULL);
}
