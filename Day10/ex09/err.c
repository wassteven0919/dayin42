/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:58:24 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/19 20:30:41 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	div_err_mes(void)
{
	ft_putstr("Stop : division by zero");
	return (0);
}

int	mod_err_mes(void)
{
	ft_putstr("Stop : modulo by zero");
	return (0);
}

int	ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	ft_putstr("error : only [ - + * / % ] are accepted.");
	return (0);
}
