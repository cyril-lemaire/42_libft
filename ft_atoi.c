/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:16:52 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/25 12:31:45 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t'
			|| c == '\f' || c == '\v' || c == '\r');
}

int			ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		is_negative;

	res = 0;
	i = 0;
	while (ft_isspace(str[i]))
		++i;
	is_negative = (str[i] == '-');
	i += (str[i] == '-' || str[i] == '+');
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		if (res < 0 && res != -res)
			return (is_negative ? 0 : -1);
		++i;
	}
	return (is_negative ? -res : res);
}
