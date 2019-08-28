/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:29:53 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 21:09:40 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*new;
	int		i;

	i = 0;
	if (*av && ac)
	{
		while (*av)
		{
			if (i > 0)
			{
				new = ft_create_elem(av[i]);
				new->next = tmp;
				tmp = new;
			}
			else
			{
				tmp = ft_create_elem(av[i]);
			}
			i++;
		}
	}
	return (tmp);
}
