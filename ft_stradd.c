#include "libft.h"
#include <string.h>

char	*ft_stradd(char **dest, const char *src)
{
	const int		dst_len = ft_strlen(*dst);
	const int		src_len = ft_strlen(src);

	if ((*dst = ft_realloc(*dst, dst_len + src_len + 1)) == NULL)
		return (NULL);
	ft_memcpy(&(*dst[dst_len]), src, src_len + 1);
	return (src_len);
}