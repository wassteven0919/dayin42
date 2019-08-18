/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 10:49:58 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/15 11:18:43 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int a;
	int i;

	i = 0;
	a = min;
	if (min >= max)
	{
		**range = NULL;
		return (0);
	}
	else
	{
		while (a < max)
		{
			a++;
			i++;
		}
		range = malloc(i);
		while (min < max)
		{
			**range = min;
			range++;
			min++;
		}
		return (i);
	}
}
