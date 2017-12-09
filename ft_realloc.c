/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 20:32:52 by clemaire          #+#    #+#             */
/*   Updated: 2017/12/06 20:34:23 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

/*
**	Note that unlike libc's realloc, we need to take the size of the current
**	allocation as a parameter. We also can't just resize the current allocation
**	so the pointed area will systematically be destroyed and copied to a new one
**	of size new_size.
*/

int		ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new_ptr;

	if (ptr == NULL)
		return (0);
	if ((new_ptr = malloc(new_size)) == NULL)
		return (NULL);
	return (ft_memcpy(new_ptr, ptr, (size_t)ft_min(old_size, new_size)));
}
