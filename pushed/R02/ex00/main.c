/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:41:28 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 20:41:59 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/header.h"

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i])
	{
		if (i != ' ')
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	if (argc < 2 || argc > 3)
	{
		ft_putargc_error();
		return (1);
	}
	if (!check_arg(argv[1]))
	{
		ft_putargc_error();
		return (1);
	}
	tab = ft_conv_base_dict();
	ft_print(argv[1], tab);
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	return (0);
}
