/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 13:57:46 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/16 14:16:17 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
#define	FT_POINT_H

typedef	struct	s_point
{
int x;
int y;
}				t_point;
void			set_point(t_point *point);
#endif
