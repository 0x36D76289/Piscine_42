/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:58:16 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/17 20:00:04 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	for_dooble_vertical(int map[6][6], int num, int line);
int	for_dooble_horizontal(int map[6][6], int num, int line);
int	check(int map[6][6], int x, int y);
int	solv(int map[6][6], int index);

int	condition(int map[6][6], int index, int i, int x, int y)
{
	if (for_dooble_vertical(map, i, x) && for_dooble_horizontal(map, i, y))
	{
		map[x][y] = i;
		if (check(map, x, y))
		{
			if (solv(map, index + 1))
				return (0);
		}
	}
	return (1);
}

int	solv(int map[6][6], int index)
{
	int	i;
	int	x;
	int	y;

	x = (index % 4) + 1;
	y = (index / 4) + 1;
	i = 1;
	if (index == 16)
		return (0);
	if (map[x][y] != 0)
		return (solv(map, index + 1));
	while (i <= 4)
	{
		if (condition(map, index, i, x, y) == 0)
			return (0);
		i++;
	}
	map[x][y] = 0;
	return (1);
}
