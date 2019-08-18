/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:02:19 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/12 22:11:10 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int a;
	int d;

	a = 0;
	d = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 123 && str[a] > 96)
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
