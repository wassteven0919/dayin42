/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:33:03 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 20:45:48 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft_opp.h"

int		main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc != 4)
		return (0);
	c = argv[2][0];
	i = 0;
	if (c == '/' && !ft_atoi(argv[3]))
		return (div_err_mes());
	if (c == '%' && !ft_atoi(argv[3]))
		return (mod_err_mes());
	while (i < 5)
	{
		if (*g_opptab[i].c == c)
		{
			ft_putnbr(g_opptab[i].arr(ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	g_opptab[5].arr(ft_atoi(argv[1]), ft_atoi(argv[3]));
	ft_putchar('\n');
	return (0);
}
