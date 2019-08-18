/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 10:35:05 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/15 10:42:38 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int a;
	int q;
	int *asd;

	a = min;
	q = 0;
	while (a < max)
	{
		a++;
		q++;
	}
	if (min >= max)
		return (0);
	else
	{
		asd = malloc(q);
		q = 0;
		while (min < max)
		{
			asd[q] = min;
			q++;
			min++;
		}
	}
	return (asd);
}
