/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:04:49 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/12 23:25:49 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char q)
{
	write(1, &q, 1);
}