/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjuki <hyunjuki@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 02:00:56 by hyunjuki          #+#    #+#             */
/*   Updated: 2020/08/19 02:20:26 by hyunjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char str)
{
	if (str == '\t' || str == '\n' || str == '\v' ||
			str == '\f' || str == '\r' || str == ' ')
		return (1);
	return (0);
}

int		is_sign(char str)
{
	if (str == '+')
		return (1);
	if (str == '-')
		return (2);
	return (0);
}

int		is_num(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int		get_integer(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (is_num(*(str + i)))
	{
		res = res * 10 + (*(str + i) - '0');
		i++;
	}
	return (res);
}

int		ft_atoi(char *str)
{
	int	sign;

	sign = 1;
	while (is_space((*str)))
		str++;
	while (is_sign(*str))
	{
		sign = is_sign(*str) == 2 ? sign * -1 : sign;
		str++;
	}
	while (*str != '\0')
	{
		if (!is_num(*str))
			return (0);
		else if (is_num(*str))
			return (sign * get_integer(str));
		str++;
	}
	return (0);
}
