/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 09:55:29 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/12 21:52:06 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int a;

	a = 0;
	while (a < n)
	{
		if (src[a] == '\0')
		{
			while (a < n)
			{
				dest[a] = '\0';
				a++;
			}
			return (dest);
		}
		else
		{
			dest[a] = src[a];
		}
		a++;
	}
	return (dest);
}
