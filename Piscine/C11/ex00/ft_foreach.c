/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjuki <hyunjuki@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 22:45:17 by hyunjuki          #+#    #+#             */
/*   Updated: 2020/08/21 01:00:19 by hyunjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
