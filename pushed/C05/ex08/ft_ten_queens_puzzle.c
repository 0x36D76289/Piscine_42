/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:38:59 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/26 17:00:41 by cfrancie         ###   ########.fr       */
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

void	ft_ten(char *tab, int x, int *res)
{
	x = 0;
	while (x < 10)
	{
		ft_putchar(tab[x] + '0');
		x++;
	}
	ft_putchar('\n');
	(*res)++;
	return ;
}

void	ft_rec_solve(char *tab, int x, int *res)
{
	int	i;
	int	j;

	if (x == 10)
		ft_ten(tab, x, res);
	i = 0;
	while (i < 10)
	{
		j = 0;
		while ((ft_abs(tab[j] - i) != x - j) && (j < x && i != tab[j]))
			j++;
		if (j >= x)
		{
			tab[x] = i;
			ft_rec_solve(tab, x + 1, res);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	tab[10];
	int		res;

	res = 0;
	ft_rec_solve(tab, 0, &res);
	return (res);
}
