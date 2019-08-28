/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:35:34 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 20:53:19 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *a;

	a = *begin_list;
	if (!a)
	{
		a = ft_create_elem(data);
	}
	else
	{
		while (a->next)
			a = a->next;
		a->next = ft_create_elem(data);
	}
}
