/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 21:08:25 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/10 23:01:42 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int g_q[100];
int g_n;
int g_c;

void	ft_putchar(char q)
{
	write(1, &q, 1);
}

int	valid(int row, int col)
{
	int i;

	i = 0;
	while (i < row)
	{
		if (g_q[i] == col || row - i == col - g_q[i] || row - i == g_q[i] - col)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	pr(int *q)
{
	int e;

	e = 0;
	while (e < g_n)
	{
		ft_putchar(q[e] + 1 + '0');
		e++;
	}
	ft_putchar('\n');
}

void	place(int row)
{
	int i;

	i = 0;
	if (row == g_n)
	{
		g_c++;
		pr(&g_q[0]);
	}
	else
	{
		while (i < g_n)
		{
			if (valid(row, i))
			{
				g_q[row] = i;
				place(row + 1);
			}
			i++;
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	place(0);
}

/*
**int	main(void)
**{
**	int row;
**
**	g_n = 8;
**	g_c = 0;
**	row = g_n;
**	ft_eight_queens_puzzle_2();
**	return (0);
**}
*/
