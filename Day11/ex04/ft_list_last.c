/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:18:20 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 21:08:30 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *a;

	a = begin_list;
	if (a)
	{
		while (a->next != NULL)
			a = a->next;
		return (a);
	}
	return (NULL);
}
