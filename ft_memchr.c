/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:27:16 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/28 15:02:31 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	const unsigned char	c_char = (unsigned char)c;

	i = 0;
	str = (const unsigned char*)s;
	while (i < n - 1 && str[i] != '\0' && str[i] != c_char)
		++i;
	return (str[i] == c_char ? (void *)&str[i] : NULL);
}
