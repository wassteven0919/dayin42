/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:33:03 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/19 16:21:12 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int						i;
	char					c;
	char const				*op = "+-*/%\0";
	t_op_functions const	arr[] = {add, sub, mtp, div, mod};

	if (argc != 4)
		return (0);
	c = argv[2][0];
	i = 0;
	if (c == '/' && !ft_atoi(argv[3]))
		return (div_err_mes());
	if (c == '%' && !ft_atoi(argv[3]))
		return (mod_err_mes());
	while (op[i])
	{
		if (op[i] == c)
		{
			ft_putnbr(arr[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putstr("0\n");
	return (0);
}
