/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjuki <hyunjuki@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 22:32:52 by hyunjuki          #+#    #+#             */
/*   Updated: 2020/08/20 22:39:17 by hyunjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_base_number(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	compact(char *arr, int interval)
{
	int i;

	i = 0;
	if (arr[0] == '-')
	{
		i++;
		interval--;
	}
	while (i + interval < 34)
	{
		arr[i] = arr[i + interval];
		i++;
	}
	while (i < 34)
		arr[i++] = '\0';
}

void	init_arr(char *arr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		arr[i] = 0;
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
