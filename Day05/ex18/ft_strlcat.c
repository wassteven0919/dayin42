/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:09:52 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/13 19:24:13 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int a;
	int d;
	int i;

	a = 0;
	d = 0;
	i = 0;
	while (src[a] != '\0')
		a++;
	while (dest[d] != '\0')
		d++;
	while (i < size - 1)
	{
		dest[d] = src[i];
		if (src[i] == '\0')
		{
			while ((i = d) < size - 1)
			{
				dest[i] = '\0';
				i++;
			}
		}
		d++;
		i++;
	}
	return (a + d);
}
