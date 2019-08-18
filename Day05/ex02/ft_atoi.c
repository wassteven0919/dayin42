/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 09:47:33 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/13 10:02:20 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'|| c == '\r' 
			|| c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	nb = 0;
	neg = 1;
    while (ft_isspace(str[i]) == 1)
        i++;
    if (str[i] != '-' && str[i] != '+' && ft_isdigit(str[i]) == 0)
		return (0);
    if (str[i] == '-')
		neg = -1;
    if (ft_isdigit(str[i]) == 0)
		i++;
    while (ft_isdigit(str[i]) == 1)
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (res * neg);
