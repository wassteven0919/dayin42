/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:44:53 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/09 10:53:14 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int q;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				q = tab[i];
				tab[i] = tab[j];
				tab[j] = q;
			}
			j++;
		}
		i++;
	}
}
