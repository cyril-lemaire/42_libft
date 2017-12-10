/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 12:17:40 by clemaire          #+#    #+#             */
/*   Updated: 2017/12/01 13:13:09 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
**	Appends the node (or list) new to *alst
**	If *alst is NULL, set it to new
**	/!\ It is perfectly possible to build a cyclic list using this function
**	(by using ft_lstappend(&my_list, my_list) for instance), note though that
**	this function will naturally timeout on a cyclic list.
*/

t_list		*ft_lstappend(t_list **alst, const t_list *new)
{
	if (alst == NULL)
		return (NULL);
	if (*alst == NULL)
		return (*alst = (t_list*)new);
	while ((*alst)->next != NULL)
		*alst = (*alst)->next;
	(*alst)->next = (t_list*)new;
	return (*alst);
}
