/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:32:45 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/27 13:33:26 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/main.h"

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

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_putnum(int num)
{
	long int	tmp;

	tmp = num;
	if (tmp < 0)
	{
		ft_putchar('-');
		tmp = -tmp;
	}
	while (tmp > 9)
	{
		ft_putnum(tmp / 10);
		tmp %= 10;
	}
	ft_putchar(tmp + '0');
}
