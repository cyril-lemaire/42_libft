#include <string.h>
#include "libft.h"

t_list			*ft_lstgetindex(const t_list *lst, size_t index)
{
	t_list		*node;

	node = (t_list*)lst;
	while (index-- > 0 && node != NULL)
		node = node->next;
	return (node);
}
