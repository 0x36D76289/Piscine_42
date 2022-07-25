/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:41:06 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/25 13:58:23 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_res(int n, int *res)
{
	int		i;
	bool	tmp;

	i = 1;
	tmp = 1;
	while (i < n)
	{
		if (res[i] <= res[i - 1])
			tmp = 0;
		i++;
	}
	if (tmp)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(res[i] + '0');
			i++;
		}
		if (res[0] < (10 - n))
		{
			ft_putchar(' ');
			ft_putchar(',');
		}
	}
}

void	ft_print_combn(int n)
{
	int	res[12];
	int	i;

	i = 0;
	while (i < n)
	{
		res[i] = 0;
		i++;
	}
	while (res[0] <= (10 - n) && n >= 1 && n < 10)
	{
		ft_put_res(n, res);
		res[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (res[i] > 9)
			{
				res[i - 1]++;
				res[i] = 0;
			}
			i--;
		}
	}
}
