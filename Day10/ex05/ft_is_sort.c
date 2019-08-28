/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:15:27 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 09:43:48 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int pos;
	int neg;

	i = 0;
	pos = 0;
	neg = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			neg = 1;
		else if (f(tab[i], tab[i + 1]) > 0)
			pos = 1;
		i++;
	}
	if ((pos == 1) && (neg == 1))
		return (0);
	else
		return (1);
}
