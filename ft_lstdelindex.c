#include <string.h>
#include "libft.h"

int			ft_lstdelindex(t_list **alst, size_t index,
								void (*del)(void *, size_t))
{
	t_list		*new_first;

	if (alst == NULL || *alst == NULL)
		return (0);
	if (index == 0)
	{
		new_first = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = new_first;
		return (1);
	}
	return (ft_lstdelnext(ft_lstgetindex(*alst, index - 1), del));
}
