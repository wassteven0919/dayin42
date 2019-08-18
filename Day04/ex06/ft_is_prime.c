/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 11:14:08 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/10 22:02:19 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	unsigned int a;

	a = 2;
	if (nb <= 1)
	{
		return (0);
	}
	else
	{
		while (a * a < (unsigned int)nb)
		{
			if (nb % a == 0)
			{
				return (0);
			}
			a++;
		}
		return (1);
	}
}

/*
**int	main(void)
**{
**	int a;
**
**	scanf("%d", &a);
**	printf("%d\n", ft_is_prime(a));
**	return (0);
**}
*/
