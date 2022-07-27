/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:43:23 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/27 18:23:33 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

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
	if (open(file, O_RDONLY) == -1)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc <)
	return (0);
}
