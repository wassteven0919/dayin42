/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:24:45 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/19 19:36:53 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

typedef	int	(*t_op_functions)(int, int);

int		ft_atoi(char *str);
int		add(int a, int b);
int		sub(int a, int b);
int		mtp(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		div_err_mes(void);
int		mod_err_mes(void);
void	ft_putchar(char q);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
#endif
