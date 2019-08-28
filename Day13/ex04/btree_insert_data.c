/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 10:27:50 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/22 10:49:30 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void*))
{
	t_btree *tmp;

	tmp = *root;
	if (!*root)
	btree_create_node(item);
	else if (cmpf(tmp->item, item) < 0)
		btree_insert_data(&tmp->left, item, cmpf);
	else
		btree_insert_data(&tmp->right, item, cmpf);
}
