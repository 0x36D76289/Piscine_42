/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcours.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:58:09 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/17 20:42:09 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_parc_vertical_left(int map[6][6], int line)
{
	int	i;
	int	view;
	int	max;
	int	tmp;

	i = 1;
	view = 0;
	max = 0;
	tmp = 0;
	while (i <= 4)
	{
		tmp = map[i][line];
		if (tmp == 0)
			return (-1);
		if (max < tmp)
		{
			max = tmp;
			view++;
		}
		i++;
	}
	return (map[0][line] == view);
}

int	ft_parc_vertical_right(int map[6][6], int line)
{
	int	i;
	int	view;
	int	max;
	int	tmp;

	i = 4;
	view = 0;
	max = 0;
	tmp = 0;
	while (i >= 1)
	{
		tmp = map[i][line];
		if (tmp == 0)
			return (-1);
		if (max < tmp)
		{
			max = tmp;
			view++;
		}
		i--;
	}
	return (map[5][line] == view);
}

int	ft_parc_horizontal_top(int map[6][6], int line)
{
	int	i;
	int	view;
	int	max;
	int	tmp;

	i = 1;
	view = 0;
	max = 0;
	while (i <= 4)
	{
		tmp = map[i][line];
		if (tmp == 0)
			return (-1);
		if (max < tmp)
		{
			max = tmp;
			view++;
		}
		i++;
	}
	return (map[line][0] == view);
}

int	ft_parc_horizontal_bot(int map[6][6], int line)
{
	int	i;
	int	view;
	int	max;
	int	tmp;

	i = 4;
	view = 0;
	max = 0;
	tmp = 0;
	while (i >= 1)
	{
		tmp = map[line][i];
		if (tmp == 0)
			return (-1);
		if (max < tmp)
		{
			max = tmp;
			view++;
		}
		i--;
	}
	return (map[line][5] == view);
}

int	check(int map[6][6], int x, int y)
{
	if (ft_parc_vertical_left(map, y) && ft_parc_vertical_right(map, y))
	{
		if (ft_parc_horizontal_top(map, x) && ft_parc_horizontal_bot(map, x))
			return (1);
	}
	return (0);
}
