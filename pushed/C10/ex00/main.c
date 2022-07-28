/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:49:33 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/27 16:39:39 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_find_file(char *file)
{
	if (open(file, O_RDONLY) == -1)
		return (1);
	return (0);
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

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 20);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 21);
		return (1);
	}
	if (ft_find_file(argv[1]))
	{
		write(1, "Cannot read file.\n", 19);
		return (1);
	}
	ft_print_file(argv[1]);
	return (0);
}
