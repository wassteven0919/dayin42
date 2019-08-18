/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 09:45:15 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/10 21:54:34 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int w;

	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		w = nb * ft_recursive_factorial(nb - 1);
		return (w);
	}
}

/*
**int	main(void)
**{
**	int a;
**
**	scanf("%d", &a);
**	printf("%d\n", ft_recursive_factorial(a));
**	return (0);
**}
*/
