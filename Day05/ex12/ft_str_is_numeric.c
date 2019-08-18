/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:56:20 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/12 22:10:08 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int a;
	int g;

	a = 0;
	g = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 58 && str[a] > 47)
			g = g;
		else
			g++;
		a++;
	}
	if (g)
		return (0);
	else
		return (1);
}