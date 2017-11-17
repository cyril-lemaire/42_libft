/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:46:42 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/17 16:38:52 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#define

char		*ft_strcpy(char *dst, char *src);
int			ft_strcmp(char *s1, char *s2);
size_t		ft_strlen(const char *s);
char		*ft_strdup(char *s);
void		ft_bzero(void *s, size_t n);
void		*memchr(const void *s, int c, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*memmove(void *dst, const void *src, size_t len);

#endif
