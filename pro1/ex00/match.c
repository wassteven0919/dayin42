/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:30:32 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/17 19:22:25 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	run(int i, int j, char *s1, char *s2)
{
	while (s1[i] != '\0')
	{
		if (s2[j] != '*')
		{
			if (s1[i] != s2[j])
				return (0);
		}
		else
		{
			while (s2[j] == '*')
				j++;
			while (s1[i] != s2[j])
				i++;
			if ((s1[i] == '\0') && (s2[j] != '\0'))
				return (0);
			else if ((s1[i] == '\0') && (s2[j] == '\0'))
				return (1);
		}
		i++;
		j++;
	}
	return (1);
}

int	match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*s1 == '\0')
	{
		while (s2[j] == '*')
			j++;
		if (s2[j] == '\0')
			return (1);
		else
			return (0);
	}
	if (*s1 != '\0' && *s2 == '\0')
		return (0);
	return (run(i, j, s1, s2));
}

int	main(void)
{
	char asd[1000];
	char qwe[1000];
	int a;

	scanf("%s %s", asd, qwe);
	a = match(asd, qwe);
	printf("%s %s\n%d", asd, qwe, a);
	return (0);
}
