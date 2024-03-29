/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:23:31 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/12 22:11:33 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int a;
	int d;

	a = 0;
	d = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 91 && str[a] > 65)
			d = d;
		else
			d++;
		a++;
	}
	if (d)
		return (0);
	else
		return (1);
}
