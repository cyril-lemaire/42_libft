/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:00:01 by clemaire          #+#    #+#             */
/*   Updated: 2017/12/04 15:26:32 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_lst;
	t_list		*f_ret;
	t_list		*current_cell;

	if (lst == NULL)
		return (NULL);
	new_lst = f(lst);
	lst = lst->next;
	current_cell = new_lst;
	while (lst != NULL && current_cell != NULL)
	{
		f_ret = f(lst);
		current_cell->next = ft_lstnew(f_ret->content, f_ret->content_size);
		lst = lst->next;
		current_cell = current_cell->next;
	}
	return (new_lst);
}
