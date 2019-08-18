/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:57:44 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/13 19:08:52 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int a;
	int s;

	a = 0;
	s = 0;
	while (src[a] != '\0')
		a++;
	while (s < size)
	{
		if (src[s] == '\0')
		{
			while (s < size)
			{
				dest[s] = '\0';
				s++;
			}
			return (a - 1);
		}
		else
			dest[s] = src[s];
		s++;
	}
	return (a - 1);
}
