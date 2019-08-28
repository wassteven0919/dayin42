/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 12:34:31 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 21:18:22 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *a;
	t_list *b;

	b = *begin_list;
	a = b->next;
	while (a)
	{
		if (cmp(a->data, data_ref) == 0)
		{
			b->next = a->next;
			a->next = NULL;
			free(a);
		}
		b = b->next;
		a = b->next;
	}
}
