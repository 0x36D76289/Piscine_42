/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:32:45 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/25 17:29:44 by cfrancie         ###   ########.fr       */
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
	char	res[12];
	int		i;

	i = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	if (num == 0)
		ft_putchar('0');
	while (num)
	{
		res[i] = ('0' + num % 10);
		num = num / 10;
	}
	while (i)
		ft_putchar(res[--i]);
}
