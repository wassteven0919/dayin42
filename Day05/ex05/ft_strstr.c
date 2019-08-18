/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 10:11:53 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/12 22:47:08 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *begin;
	char *pattern;

	while (*str)
	{
		begin = str;
		pattern = to_find;
		while (*str && *pattern && (*str == *pattern))
		{
			str++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		str = begin + 1;
	}
	return (NULL);
}

int		main(void)
{
	char a[50];
	char b[50];
	char *c;

	scanf("%s %s", a, b);
	c = ft_strstr(a, b);
	printf("%p %p\n", c, strstr(a, b));
	return (0);
}
