/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:04:06 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/19 13:14:50 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]))
			flag = 1;
		i++;
	}
	return (flag);
}
