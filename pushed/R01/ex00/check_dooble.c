/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dooble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:51:07 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/17 20:29:35 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	for_dooble_vertical(int map[6][6], int num, int line)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (map[line][i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	for_dooble_horizontal(int map[6][6], int num, int line)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (map[i][line] == num)
			return (0);
		i++;
	}
	return (1);
}
