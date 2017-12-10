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
**	Since the old memory is destroyed, ptr is taken by reference and set to
**	the new memory address. (Same as the return value)
*/

void			*ft_realloc(void **ap, size_t old_size, size_t new_size)
{
	void	*new_ptr;

	if (new_size == 0 || ap == NULL)
	{
		ft_memdel(ap);
		return (NULL);
	}
	if (*ap != NULL && (new_ptr = malloc(new_size)) != NULL)
		ft_memcpy(new_ptr, *ap, (size_t)ft_min(old_size, new_size));
	free(*ap);
	return (*ap = new_ptr);
}
