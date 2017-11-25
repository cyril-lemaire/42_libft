/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:58:08 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/24 12:28:41 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*s3;
	size_t	i;

	s3 = s1;
	while (*s3 != '\0')
		++s3;
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		s3[i] = s2[i];
		++i;
	}
	s3[i] = '\0';
	return (s1);
}