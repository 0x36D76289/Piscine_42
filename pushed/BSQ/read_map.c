/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:24:36 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/27 20:31:51 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_size_file(char *argv)
{
	int		size;
	char	buffer;
	int		fd;

	size = 0;
	fd = open(argv, O_RDONLY);
	while (read(fd, &buffer, 1))
	{
		size++;
	}
	close(fd);
	return (size);
}

int	ft_get_number_lines(char *argv)
{
	int		i;
	char	*buffer;
	int		nb_l;
	int		fd;

	i = 0;
	nb_l = 0;
	fd = open(argv, O_RDONLY);
	buffer = malloc(BUFF_SIZE * sizeof(char));
	if (buffer == NULL)
		return (0);
	while (read(fd, &buffer[i], 1))
	{
		if (buffer[i] > 58 || buffer[i] < 47)
			break ;
		nb_l = nb_l * 10 + (buffer[i] - 48);
		i++;
	}
	free (buffer);
	close(fd);
	return (nb_l);
}

int	ft_get_number_columns(char *argv)
{
	char	*buffer;
	int		j;
	int		size_file;
	int		fd;

	j = 0;
	fd = open(argv, O_RDONLY);
	size_file = ft_size_file(argv);
	ft_get_second_line(fd);
	buffer = malloc(size_file * sizeof(char));
	if (buffer == NULL)
		return (0);
	while (read(fd, &buffer[j], 1))
	{
		if (buffer[j] == '\n')
			break ;
		j++;
	}
	free (buffer);
	close(fd);
	return (j + 1);
}

void	ft_get_second_line(int fd)
{
	int		i;
	char	*buffer;

	i = 0;
	buffer = malloc(BUFF_SIZE * sizeof (char));
	if (buffer == NULL)
		return ;
	while (read(fd, &buffer[i], 1))
	{
		if (buffer[i] == '\n')
			break ;
		i++;
	}
}
