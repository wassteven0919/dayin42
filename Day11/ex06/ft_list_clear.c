/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:42:51 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/20 21:10:43 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *tail;

	tmp = *begin_list;
	tail = tmp->next;
	while (tmp)
	{
		free(tmp);
		tmp = tail;
		tail = tmp->next;
	}
	free(tmp);
}
