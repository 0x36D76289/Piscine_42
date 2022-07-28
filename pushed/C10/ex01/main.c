/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:43:23 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/28 17:53:44 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	ft_error(char *file)
{
	ft_putstr("cat: ");
	ft_putstr(file);
	write(2, ": ", 2);
	ft_putstr(strerror(errno));
	write(2, "\n", 1);
	return (1);
}

int	ft_print_file(char *file)
{
	char	a;
	int		fd;
	int		r;

	fd = open(file, O_RDONLY);
	r = read(fd, &a, 1);
	while (r)
	{
		if (r == -1)
			return (1);
		write(1, &a, 1);
		r = read(fd, &a, 1);
	}
	close(fd);
	return (0);
}

int	ft_find_file(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	(void)fd;
	if (errno != 0)
		return (ft_error(file));
	return (0);
}

int	main(int argc, char **argv)
{
	char	*file;
	int		counts;

	counts = 1;
	errno = 0;
	file = argv[0];
	if (argc >= 2)
	{
		while (counts < argc)
		{
			file = basename(argv[counts]);
			if (!(ft_find_file(file) == 1))
				ft_print_file(file);
			errno = 0;
			counts++;
		}
	}
	else
		ft_putno_param(0);
	return (0);
}
