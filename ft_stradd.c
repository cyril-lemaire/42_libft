/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 04:38:09 by clemaire          #+#    #+#             */
/*   Updated: 2018/04/21 04:42:26 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_stradd(const char *s1, const char *s2)
{
	const size_t	s1_len = ft_strlen(s1);
	const size_t	s2_len = ft_strlen(s2);
	char			*res;

	if ((res = (char*)malloc(s1_len + s2_len + 1)) == NULL)
		return (NULL);
	ft_memcpy(res, s1, s1_len);
	return (ft_memcpy(res, s2, s2_len + 1));
}
