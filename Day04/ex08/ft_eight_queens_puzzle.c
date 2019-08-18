/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 12:39:07 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/10 23:11:10 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int g_q[100];
int g_n;
int g_c;

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

int ft_eight_queens_puzzle(void)
{
	place(0);
	return (g_c);
}

void	place(int row)
{
	int i;

	i = 0;
	if (row == g_n)
	{
		g_c++;
		ft_eight_queens_puzzle();
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

/*
**int	main(void)
**{
**	int row;
**
**	g_n = 8;
**	g_c = 0;
**	row = g_n;
**	place(0);
**	printf("%d", g_c);
**	return (0);
**}
*/
