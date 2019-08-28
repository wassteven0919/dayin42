/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:04:38 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 21:24:30 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *new;
	t_list *old;
	t_list *before;

	old = *begin_list;
	before = *begin_list;
	while (old)
	{
		if (cmp(old->data, data) == 1)
		{
			while (before->next != old)
				before = before->next;
			before->next = new;
			new->data = data;
			new->next = old;
			return ;
		}
		old = old->next;
	}
}
