/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 20:44:48 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/15 21:07:31 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_i;
int g_j;
int g_h;
int g_p;

char	**ft_split_whitespaces(char *str)
{
	char asd[10000][10000];

	while (str[g_h] != '\0')
	{
		if(str[g_h] == '\t' || str[g_h] == '\n' || str[g_h] == ' ')
		{
			g_h++;
			if (g_p == 0)
				g_i++;
			g_p++;
		}
		else
		{
			asd[g_i][g_j] = str[g_h];
			g_j++;
			g-p = 0;
		}
	}
	asd[g_i + 1][g-j] = NULL;
	return (asd);
}
