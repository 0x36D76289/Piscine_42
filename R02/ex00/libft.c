/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:18:25 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 20:30:51 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/header.h"

int	ft_zero_check(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isspace(char *str)
{
	return (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ');
}

char	*ft_split(char *tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i] != ':')
		i++;
	i++;
	while (ft_isspace(&tab[i]) == 1)
		i++;
	while (tab[i] != '\0')
	{
		if (!(ft_isspace(&tab[i]) && ft_isspace(&tab[i + 1])))
		{
			tab[j] = tab[i];
			tab[i] = ' ';
			j++;
		}
		i++;
	}
	tab[j - 1] = '\0';
	return (tab);
}
