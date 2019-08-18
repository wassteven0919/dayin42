/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 10:09:58 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/10 21:58:22 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int a;

	a = 1;
	if (power > 1)
	{
		a = nb * ft_recursive_power(nb, power - 1);
		return (a);
	}
	else if (power == 0 || power == 1)
	{
		return (nb);
	}
	else
	{
		return (0);
	}
}

/*
**int	main(void)
**{
**	int s;
**	int d;
**
**	scanf("%d %d", &s, &d);
**	printf("%d\n", ft_recursive_power(s, d));
**	return (0);
**}
*/
