/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:59:15 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 21:05:02 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putstr_res(char *str, char **tab, int i, int size)
{
	int	j;

	j = 0;
	while (tab[j])
	{
		if (tab[j] == str[i])
		{
			ft_putstr(tab[j]);
			if (str[i + 1] != "\0")
				ft_putchar(" ");
		}
		j++;
	}
}

void	ft_print(char *str, char **tab)
{
	int		i;
	int		size;
	int		can;

	size = ft_strlen(str);
	i = 0;
	if (ft_zero_check(str))
		ft_putstr(tab[str[i] - '0']);
	while (size > 0)
	{
		if (str[i] - '0' != 0)
		{
			ft_putstr_res(str, tab, i, size);
		}
		i++;
		size--;
	}
	write(1, "\n", 1);
}
