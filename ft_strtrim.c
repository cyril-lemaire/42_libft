/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:05:36 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/29 12:45:29 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	trimmed_len;

	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s != '\0')
		++s;
	trimmed_len = ft_strlen(s);
	while (trimmed_len > 0 && ft_isspace(s[trimmed_len - 1]))
		--trimmed_len;
	return (ft_strsub(s, 0, trimmed_len));
}