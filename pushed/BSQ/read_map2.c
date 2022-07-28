/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:28:31 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/27 21:30:03 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	v_buff(char **buffer, char *argv, int c)
{
	int	i;

	i = 0;
	if (buffer == NULL)
		return (0);
	while (i < ft_get_number_lines(argv))
	{
		buffer[i] = malloc(c * sizeof(char));
		if (buffer[i] == NULL)
			return (0);
		i++;
	}
	return (1);
}

char	**ft_read_file(char *argv)
{
	char	**buffer;
	int		i;
	int		fd;
	int		c;
	int		ret;

	i = 0;
	ret = 0;
	c = ft_get_number_columns(argv);
	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	buffer = malloc(ft_get_number_lines(argv) * sizeof(char *));
	if (v_buff(buffer, argv, c) != 1)
		return (NULL);
	i = 0;
	while (i < ft_get_number_lines(argv))
	{
		ret = read(fd, buffer[i], c);
		if (ret == -1)
			return (NULL);
		buffer[i++][c - 1] = '\0';
	}
	close (fd);
	return (buffer);
}
