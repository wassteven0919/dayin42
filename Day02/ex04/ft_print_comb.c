/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:55:35 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/08 20:45:19 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**void	ft_pu1tchar(char q)
**{
**	write(1, &q, 1);
**}
*/

void	pr_com(char nb)
{
	if (nb - '0' < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a[3];

	a[0] = '0';
	a[1] = '1';
	a[2] = '2';
	while (a[0] < '8')
	{
		while ((a[1] < '9') && (a[1] > a[0]))
		{
			while ((a[2] <= '9') && (a[2] > a[1]))
			{
				ft_putchar(a[0]);
				ft_putchar(a[1]);
				ft_putchar(a[2]);
				pr_com(a[0]);
				a[2] = a[2] + 1;
			}
			a[2] = a[1] + 2;
			a[1] = a[1] + 1;
		}
		a[0] = a[0] + 1;
		a[1] = a[0] + 1;
		a[2] = a[1] + 1;
	}
}

/*
**int	main(void)
**{
**	ft_print_comb();
**	return (0);
**}
*/
