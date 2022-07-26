/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_solution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 00:10:57 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/26 23:51:10 by cfrancie         ###   ########.fr       */
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
	int	**map2;
	int	i;

	i = 0;
	if ((map2 = malloc(line * sizeof(int*))) == NULL)
		return NULL;
	while (i < line)
	{
		if ((map2[i] = malloc(colone * sizeof(int))) == NULL)
			return NULL;
		i++;
	}
	return (map2);
}

int	ft_biggest_square(char **map, int colone, int line, char o)
{
	int	i;
	int	j;
	int	**map2;
	int	count_max;

	i = 0;
	count_max = 0;
	map2 = ft_generate_map(line, colone);
	if (map2 == NULL)
		return (0);
	while (i < line)
	{
		j = 0;
		while (j < colone - 1)
		{
			if (map[i][j] == o)
				map2[i][j] = 0;
			else if (i == 0 || j == 0)
				map2[i][j] = 1;
			else
				map2[i][j] = ft_min(map2[i-1][j], map2[i][j-1], map2[i-1][j-1]) + 1;
			if (map2[i][j] > count_max)
				count_max = map2[i][j];
			j++;
		}
		i++;
	}
	free(map2);
	return (count_max);
}

int	ft_find_position_square(char **map, int colone, int line, char o)
{
	int	i;
	int	j;
	int	**map2;
	int	count_max;
	int	p;

	i = 0;
	p = 0;
	count_max = ft_biggest_square(map, colone, line, o);
	map2 = ft_generate_map(line, colone);
	if (map2 == NULL)
		return (0);
	while (i < line)
	{
		j = 0;
		while (j < colone - 1)
		{
			if (map[i][j] == o)
				map2[i][j] = 0;
			else if (i == 0 || j == 0)
				map2[i][j] = 1;
			else
				map2[i][j] = ft_min(map2[i-1][j], map2[i][j-1], map2[i-1][j-1]) + 1;
			if (map2[i][j] == count_max)
			{
				p = i * (colone - 1) + j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(map2);
	return (p);
}
