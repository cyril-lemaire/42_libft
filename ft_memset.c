/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:52:38 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/13 14:55:17 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		b[i++] = (unsigned char)(c);
	}
	b[i] = '\0';
	return (b);
}
