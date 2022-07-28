/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:13:53 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/17 20:30:41 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	print(int board[6][6])
{
	int	x;
	int	y;

	y = 1;
	while (y <= 4)
	{
		x = 1;
		while (x <= 4)
		{
			ft_putstr(board[x][y]);
			if (x == 4)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			x++;
		}
		y++;
	}
}

int	ft_lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
