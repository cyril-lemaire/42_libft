/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:52:10 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/24 13:06:01 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	while (*haystack != '\0')
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i] != '\0')
			++i;
		if (needle[i] == '\0')
			return (char*)(haystack);
		++haystack;
	}
	return (NULL);
}
