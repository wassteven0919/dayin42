/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 12:43:14 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 21:19:06 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merget(t_list **begin_list1, t_list *begin_list2)
{
	t_list *nb1;

	nb1 = *begin_list1;
	while (nb1->next)
		nb1 = nb1->next;
	nb1->next = begin_list2;
}
