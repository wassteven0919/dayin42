/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:24:45 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 20:40:02 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

typedef	int	(*t_s_opp)(int, int);

typedef struct	s_opp
{
	char	*c;
	t_s_opp arr;
}				t_opp;

int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mtp(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		div_err_mes(void);
int		mod_err_mes(void);
int		ft_usage(int a, int b);
void	ft_putchar(char q);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
#endif
