/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:38:59 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/26 15:16:05 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	ft_is_ten(char *tab, int x, int *max)
{
	x = 0;

	while (x < 10)
	{
		ft_putchar(tab[x] + '0');
		x++;
	}
	ft_putchar('\n');
	(*max)++;
	return ;
}

void	ft_solve(char *tab, int x, int *max)
{
	int	i;
	int	j;

	if (x == 10)
		ft_is_ten(tab, x, max);
	i = 0;
	while (i < 10)
	{
		j = 0;
		while ((j < x && i != tab[j]) && (ft_abs(tab[j] - i) != x - j))
			j++;
		if (j >= x)
		{
			tab[x] = i;
			ft_solve(tab, x + 1, max);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	tab[10];
	int		max;

	max = 0;
	ft_solve(tab, 0, &max);
	return (max);
}
