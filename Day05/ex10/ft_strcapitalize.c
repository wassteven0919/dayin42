/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 11:08:25 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/13 11:03:26 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_i;

char	*ft_strcapitalize(char *str)
{
	int j;

	g_i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if ((str[j] > 64 && str[j] < 91) || (str[j] > 47 && str[j] < 58))
		{
			if (g_i == 0)
				g_i++;
			else
				str[j] = str[j] + 32;
		}
		else if (str[j] > 96 && str[j] < 123)
		{
			if (g_i == 0)
			{
				str[j] = str[j] - 32;
				g_i++;
			}
		}
		else
			g_i = 0;
		j++;
	}
}
