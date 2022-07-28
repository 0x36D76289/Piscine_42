/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_params.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:24:41 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/27 19:21:02 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	ft_get_char_full(char *argv)
{
	char	*buffer;
	char	p;
	int		i;
	int		fd;

	i = 0;
	fd = open(argv, O_RDONLY);
	buffer = malloc(BUFF_SIZE * sizeof(char));
	if (!buffer)
		return (0);
	while (read(fd, &buffer[i], 1))
	{
		if (buffer[i] == '\n')
			break ;
		i++;
	}
	p = buffer[i - 1];
	free (buffer);
	close(fd);
	return (p);
}

char	ft_get_char_void(char *argv)
{
	char	*buffer;
	char	res;
	int		fd;
	int		i;

	i = 0;
	fd = open(argv, O_RDONLY);
	buffer = malloc(BUFF_SIZE * sizeof(char));
	if (!buffer)
		return (0);
	while (read(fd, &buffer[i], 1))
	{
		if (buffer[i] == '\n')
			break ;
		i++;
	}
	res = buffer[i - 3];
	free (buffer);
	close(fd);
	return (res);
}

char	ft_get_char_obst(char *argv)
{
	char	*buffer;
	char	res;
	int		fd;
	int		i;

	i = 0;
	fd = open(argv, O_RDONLY);
	buffer = malloc(BUFF_SIZE * sizeof(char));
	if (!buffer)
		return (0);
	while (read(fd, &buffer[i], 1))
	{
		if (buffer[i] == '\n')
			break ;
		i++;
	}
	res = buffer[i - 2];
	free (buffer);
	close(fd);
	return (res);
}
