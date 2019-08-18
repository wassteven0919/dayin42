/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 09:39:28 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/10 21:52:44 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int w;

	i = 1;
	w = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 13)
	{
		while (i <= nb)
		{
			w *= i;
			i++;
		}
		return (w);
	}
	else
	{
		return (0);
	}
}
