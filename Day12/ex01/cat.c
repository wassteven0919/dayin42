/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 10:09:19 by chuchang          #+#    #+#             */
/*   Updated: 2019/08/22 15:08:08 by chuchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	display(int count, char *files[])
{
	int		file;
	char	buffer[28676];
	int		i;
	ssize_t	bytes;
	char	*filename;

	i = 0;
	while (++i <= count)
	{
		filename = files[i];
		file = open(filename, O_RDWR);
		if (file < 0)
		{
			write(2, "cat: ", 5);
			write(2, filename, ft_strlen(filename));
			if (errno == 21)
				write(2, ": Is a directory\n", 17);
			else if (errno == 13)
				write(2, ": Permission denied\n", 20);
			else
				write(2, ": No such file or directory\n", 28);
		}
		while ((bytes = read(file, &buffer, 28676)))
			write(1, &buffer, bytes);
		close(file);
	}
}

void	write_in_term(void)
{
	char	c;

	while (read(STDIN_FILENO, &c, 1) > 0)
		write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write_in_term();
	else
		display(argc - 1, argv);
	return (0);
}
