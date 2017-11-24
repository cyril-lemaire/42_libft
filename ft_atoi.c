/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:16:52 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/24 15:23:57 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		is_negative;

	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\f' || str[i] == '\v')
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		is_negative = (str[i] == '-');
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		++i;
	}
	return (is_negative ? -res : res);
}
