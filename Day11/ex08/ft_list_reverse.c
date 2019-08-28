/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 11:06:46 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 21:12:43 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp;
	t_list *head;
	t_list *tail;

	tail = *begin_list;
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
	if (tmp)
		return (tmp);
	else
		return (tail);
}
