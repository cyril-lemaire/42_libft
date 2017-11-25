/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:08:36 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/25 15:33:45 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a = (const unsigned char*)s1;
	const unsigned char	*b = (const unsigned char*)s2;

	i = 0;
	while (a[i] == b[i] && a[i] != '\0' && i < n)
		++i;
	return (a[i] - b[i]);
}
