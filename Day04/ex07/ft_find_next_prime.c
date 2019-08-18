/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 11:26:39 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/10 20:35:37 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	unsigned int a;

	a = 2;
	if (nb == 0 || nb == 1)
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

int	ft_find_next_prime(int nb)
{
	int a;

	if (ft_is_prime(nb))
	{
		return (nb);
	}
	else
	{
		a = ft_find_next_prime(nb + 1);
		if (ft_is_prime(a))
		{
			return (a);
		}
		else
		{
			return (0);
		}
	}
}

/*
**int	main(void)
**{
**	int a;
**
**	scanf("%d", &a);
**	printf("%d\n", ft_find_next_prime(a));
**	return (0);
**}
*/
