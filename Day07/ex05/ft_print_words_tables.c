/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:04:29 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/15 21:22:34 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char q)
{
	write(1, &q, 1);
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i][j] != NULL)
	{
		if (tab[i][j] = '\0')
		{
			i++;
			ft_putchar('\n');
			j = 0;
		}
		else
		{
			ft_putchar(tab[i][j]);
			j++;
		}
	}
}
