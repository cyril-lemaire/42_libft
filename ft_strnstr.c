/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:14:57 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/25 15:23:46 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	needle_len = 0;
	while (needle[needle_len] != '\0' && needle_len < len)
		++needle_len;
	i = 0;
	while (haystack[i] != '\0' && i < len - needle_len + 1)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < needle_len)
			++j;
		if (j == needle_len)
			return ((char *)&haystack[i]);
		++i;
	}
	return (NULL);
}
