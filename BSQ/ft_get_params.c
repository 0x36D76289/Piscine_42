/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:24:41 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/26 16:29:29 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	ft_get_char_full(char *argv)
{
	int		i;
	char	*buf;
	int		fd;
	char	p;

	i = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(BUFF_SIZE * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	p = buf[i - 1];
	free (buf);
	close(fd);
	return (p);
}

char	ft_get_char_void(char *argv)
{
	char	*buf;
	char	v;
	int		fd;
	int		i;

	i = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(BUFF_SIZE * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	v = buf[i - 3];
	free (buf);
	close(fd);
	return (v);
}

char	ft_get_char_obst(char *argv)
{
	int		i;
	char	*buf;
	int		fd;
	char	o;

	i = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(BUFF_SIZE * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	o = buf[i - 2];
	free (buf);
	close(fd);
	return (o);
}
