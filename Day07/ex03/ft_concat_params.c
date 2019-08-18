/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:49:11 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/15 19:18:01 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	calstr(int argc, char **argv)
{
	int i;
	int j;
	int len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		if(argv[i] != NULL)
		{
			j = 0;
			while (argv[i][j])
			{
				len++;
				j++;
			}
			i++;
		}
		return (len);
}

char	*putstr(char *asd, char **argv, int argc)
{
	int i;
	int j;
	int a;

	i = 1;
	j = 0;
	a = 0;
	while (i < argc)
	{
		while (argv[i][j]!= '\0')
		{
			asd[a] = argv[i][j];
			j++;
			a++;
		}
		asd[a] = '\n';
		a++;
		i++;
		j = 0;
	}
	return (asd);
}

char	*ft_concat_params(int argc, char **argv)
{
	char *asd;

	asd = malloc(len + argc);
	putstr(asd, argv, argc);
	return (asd);
}

int	main(int argc, char **argv)
{
	int i;
	char *asd;

	i = calstr(argc, argv);
	asd = ft_concat_params;
	return (0);
}
