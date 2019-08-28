/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:50:25 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 20:59:53 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *a;

	if (*begin_list)
	{
		a = ft_create_elem(data);
		a->next = *begin_list;
		*begin_list = a;
	}
	else
		*begin_list = ft_create_elem(data);
}
