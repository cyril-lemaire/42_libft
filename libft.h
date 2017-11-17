/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:46:42 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/17 12:58:21 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

char		*ft_strcpy(char *dst, char *src);
int			ft_strcmp(char *s1, char *s2);
static int	ft_strlen(char *s);
char		*ft_strdup(char *s);
void		ft_bzero(void *s, size_t n);
void		*memchr(const void *s, int c, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);

#endif
