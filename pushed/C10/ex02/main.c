/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:01:53 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/28 20:05:01 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_

int	ft_count_line(char *file)
{
	int		counts;
	int		*coord;
	char	a;
	int		fd;
	int		r;

	counts = 0;
	fd = open(file, O_RDONLY);
	r = read(fd, &a, 1);
	while (r)
	{
		if (r == -1)
			return (1);
		if (a = "\n")
			coord
		counts++;
		r = read(fd, &a, 1);
	}
	close(fd);
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
