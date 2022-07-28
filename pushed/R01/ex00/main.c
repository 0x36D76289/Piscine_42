/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:57:34 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/17 20:28:02 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_lenstr(char *str);
void	ft_putstr(char *str);
int		solv(int map[6][6], int index);
void	ft_putint(int c);
void	print(int board[6][6]);
int		check(int map[6][6], int x, int y);


void	init_board(int map[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	add_num(int map[6][6], int i, int num)
{
	if (i >= 0 && i <= 3)
		map[i + 1][0] = num;
	else if (i >= 4 && i <= 7)
		map[i - 3][5] = num;
	else if (i >= 8 && i <= 11)
		map[0][i - 7] = num;
	else if (i >= 12 && i <= 15)
		map[5][i - 11] = num;
}

int	verif_argv(int argc, char **argv, int map[6][6])
{
	char	*lines;
	int		i;

	if (argc != 2)
		return (0);
	i = 0;
	lines = argv[1];
	while (lines[i])
	{
		if (i % 2 == 0 && lines[i] >= '1' && lines[i] <= '4'&& i <= 30)
			add_num(map, i / 2, lines[i] - '0');
		else if (i % 2 == 0)
			return (0);
		else if (!(lines[i] == ' ' || i >= 31))
			return (0);
		i++;
	}
	return (!(i < 16));
}

int	main(int argc, char **argv)
{
	int	map[6][6];

	if (verif_argv(argc, argv, map) == 0)
	{
		write(1, "Error", 6);
		return (0);
	}
	init_board(map);
	if (solv(map, 0))
		return (0);
	print(map);
}
