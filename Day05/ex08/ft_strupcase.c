/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 10:45:18 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/12 11:05:28 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 123 && str[a] > 96)
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}