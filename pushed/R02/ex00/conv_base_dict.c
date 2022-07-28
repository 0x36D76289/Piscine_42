/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_base_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:49:19 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 21:28:37 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/header.h"

int	ft_count_lines(int fd)
{
	char	buffer[2];
	int		count;
	int		ret;

	count = 0;
	ret = read(fd, buffer, 1);
	while (ret)
	{
		if (buffer[0] == '\n')
			count++;
		ret = read(fd, buffer, 1);
	}
	return (count);
}

char	*ft_convert_num(char *num, int index)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (ft_strlen(num) - index));
	res[0] = num[index];
	while (res[i])
	{
		i++;
		res[i] = '0';
	}
	return (res);
}

// calcule la taille de chaque ligne du fichier fd
// a malloc a chaque tableau de tab 
void	ft_malloc_res(char **tab, int fd)
{
	char	buffer[2];
	int		count;
	int		ret;
	int		i;

	i = 0;
	count = 0;
	ret = read(fd, buffer, 1);
	while (ret)
	{
		i++;
		if (buffer[0] == '\n')
		{
			tab[count] = malloc(sizeof(char *) * (i + 1));
			if (!tab)
				return ;
			i = 0;
			count++;
		}
		ret = read(fd, buffer, 1);
	}
	tab[count] = NULL;
}

// associe chaque ligne du fichier fd a chaque tableau de char de res
void	ft_fill_file(char **res, int fd)
{
	char	buffer[2];
	int		count;
	int		ret;
	int		i;

	i = 0;
	count = 0;
	ret = read(fd, buffer, 1);
	while (ret)
	{
		res[count][i] = buffer[0];
		res[count][i + 1] = '\0';
		i++;
		if (buffer[0] == '\n')
		{
			i = 0;
			count++;
		}
	}
}

char	**ft_conv_base_dict(void)
{
	char	**res;
	int		fd;
	int		i;

	i = 0;
	fd = open(DEFAULT_PATH, O_RDONLY);
	if (fd == -1)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_count_lines(fd) + 1));
	if (!res || close(fd) == -1)
		return (NULL);
	ft_malloc_res(res, fd);
	ft_fill_file(res, fd);
	while (res[i])
	{
		ft_split(res[i]);
		i++;
	}
	return (res);
}
