/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:20:15 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/17 16:41:16 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*res;
	int		size;
	int		i;

	size = ft_strlen(s) + 1;
	res = (char*)malloc(size * sizeof(char));
	i = 0;
	while (i < size)
	{
		res[i] = s[i];
		++i;
	}
	return (res);
}
