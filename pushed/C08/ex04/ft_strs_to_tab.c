/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:39:30 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/21 12:29:12 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

int	ft_lenstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str_copy(char *str)
{
	int		i;
	char	*res;

	res = malloc(sizeof(char) * (ft_lenstr(str) + 1));
	i = 0;
	if (!res)
		return (NULL);
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_lenstr(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_str_copy(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
