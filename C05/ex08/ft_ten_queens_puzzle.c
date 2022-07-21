/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:38:59 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/21 16:53:21 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_backtrackng(int map[10][10])
{
	int	i;
	int	y;
}

char	*


int	ft_ten_queens_puzzle(void)
{
	int	map[10][10];
	int	i;
	int	y;

	while (map)
	{
		y = 0;
		while (map[i][y])
		{
			map[i][y] = 0;
			y++;
		}
		i++;
	}
	i = 0;
	y = 0;
	map[0][0] = 1;
	while ()
	{

	}
	

}