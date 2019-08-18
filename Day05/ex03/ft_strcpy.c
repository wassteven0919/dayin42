/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 09:50:02 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/12 21:51:30 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	dest = src;
	return (dest);
}

int	main(void)
{
	char a[10];
	char b[20];

	scanf("%s", b);
	&a = ft_strcpy(a, b);
	printf("%s\n", a);
	return (0);
}
