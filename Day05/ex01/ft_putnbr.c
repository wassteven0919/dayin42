/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 09:40:58 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/12 09:46:29 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char q)
{
	write(1, &q, 1);
}

int g_g;
unsigned int g_d;
char g_a[20];

void	count(unsigned int nb)
{
	g_g = 0;
	nb;
	while (nb != 0)
	{
		g_a[g_g] = nb % 10 + '0';
		nb = nb / 10;
		g_g++;
	}
	while (g_g >= 0)
	{
		ft_putchar(g_a[g_g]);
		g_g--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		g_d = nb * -1;
	}
	if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		count(g_d);
	}
}
