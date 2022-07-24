/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:32:45 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 20:27:28 by cfrancie         ###   ########.fr       */
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
	char	res[20];
	long	tmp;

	i = 0;
	tmp = num;
	if (tmp < 0)
	{
		write(1, "-", 1);
		tmp *= -1;
	}
	if (tmp == 0)
		ft_putchar('0');
	while (tmp > 0)
	{
		ft_putchar((char)((tmp % 10) - '0'));
		tmp /= 10;
	}
}


