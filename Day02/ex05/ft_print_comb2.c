/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 16:53:20 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/09 15:19:54 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char q)
{
	write(1, &q, 1);
}


void	pr_com(int a, int b)
{
	if (a < b)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		ft_putchar(' ');
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
		if (a < 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		while (b <= 99)
		{
			pr_com(a, b);
			b++;
		}
		b = 0;
		a++;
	}
}
/*
**int	main(void)
**{
**	ft_print_comb2();
**	return (0);
**}
*/
