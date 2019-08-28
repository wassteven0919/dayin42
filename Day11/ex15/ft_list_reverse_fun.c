/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:00:46 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 21:20:34 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *tmp;
	t_list *head;
	t_list *tail;

	tail = begin_list;
	tmp = tail->next;
	head = tmp->next;
	tail->next = NULL;
	while (head != NULL)
	{
		tmp->next = tail;
		tail = tmp;
		tmp = head;
		head = tmp->next;
	}
	tmp->next = tail;
}
