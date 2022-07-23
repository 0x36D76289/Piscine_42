/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:32:45 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/23 19:34:27 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

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

void	ft_putnum(int num)
{
	long	tmp;

	tmp = num;
	if (tmp < 0)
	{
		write(1, "-", 1);
		tmp *= -1;
	}
	while (num > 0)
	{
		ft_putchar((char)(num % 10));
		num /= 10;
	}
}
