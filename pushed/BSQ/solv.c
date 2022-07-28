/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 00:10:57 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/27 20:43:44 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	return (c);
}

int	**ft_generate_map(int line, int colone)
{
	int	**res;
	int	i;

	i = 0;
	res = malloc(line * sizeof (int *));
	if (res == NULL)
		return (NULL);
	while (i < line)
	{
		res[i] = malloc(colone * sizeof (int));
		if (res[i] == NULL)
			return (NULL);
		i++;
	}
	return (res);
}

int	ft_biggest_square(char **map, int colone, int line, char o)
{
	int	i;
	int	j;
	int	**res;
	int	count_max;

	i = 0;
	count_max = 0;
	res = ft_generate_map(line, colone);
	if (res == NULL)
		return (0);
	while (i < line)
	{
		j = 0;
		while (j < colone - 1)
		{
			if (map[i][j] == o)
				res[i][j] = 0;
			else if (i == 0 || j == 0)
				res[i][j] = 1;
			else
				res[i][j] = ft_min(res[i - 1][j], res[i][j - 1],
						res[i - 1][j - 1]) + 1;
			if (res[i][j] > count_max)
				count_max = res[i][j];
			j++;
		}
		i++;
	}
	free(res);
	return (count_max);
}

int	ft_find_position_square(char **map, int colone, int line, char o)
{
	int	i;
	int	j;
	int	**res;
	int	count_max;
	int	p;

	i = 0;
	p = 0;
	count_max = ft_biggest_square(map, colone, line, o);
	res = ft_generate_map(line, colone);
	if (res == NULL)
		return (0);
	while (i < line)
	{
		j = 0;
		while (j < colone - 1)
		{
			if (map[i][j] == o)
				res[i][j] = 0;
			else if (i == 0 || j == 0)
				res[i][j] = 1;
			else
				res[i][j] = ft_min(res[i - 1][j], res[i][j - 1],
						res[i - 1][j - 1]) + 1;
			if (res[i][j] == count_max)
			{
				p = i * (colone - 1) + j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(res);
	return (p);
}
