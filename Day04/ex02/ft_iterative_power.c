/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 10:30:02 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/10 20:44:28 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	while (power >= 1)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

/*
**int	main(void)
**{
**	int a;
**	int b;
**
**	scanf("%d %d", &a, &b);
**	printf("%d\n", ft_iterative_power(a, b));
**	return (0);
**}
*/
