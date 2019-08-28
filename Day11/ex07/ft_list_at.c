/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:57:38 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 21:11:39 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*tmp;

	tmp = begin;
	i = 0;
	while (i < nbr)
	{
		tmp = tmp->next;
		i++;
		if (tmp == NULL)
			return (NULL);
	}
	return (tmp);
}
