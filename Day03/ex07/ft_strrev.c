/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:24:56 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/09 13:48:41 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int g_i;
int g_a;
char g_asd;

char	*ft_strrev(char *str)
{
	g_i = 0;
	g_a = 0;
	while (str[g_i] != '\0')
	{
		g_i++;
	}
	while (g_i > 0)
	{
		g_asd = str[g_i - 1];
		str[g_i - 1] = str[a];
		str[a] = g_asd;
		g_i--;
		g_a++;
	}
	return (asd);
}

/*
**int main(void)
**{
**	char was[500];
**	char* s;
**
**	scanf("%s",was);
**	printf("%s",ft_strrev(was));
**	return (0);
**}
*/
