/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:54:50 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/19 16:46:18 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *r;

	i = 0;
	r = (int*)malloc(sizeof(int) * length);
	if (r == NULL)
		return (NULL);
	while (i < length)
	{
		r[i] = f(tab[i]);
		i++;
	}
	return (r);
}
