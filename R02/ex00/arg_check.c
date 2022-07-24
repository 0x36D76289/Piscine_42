/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:04:22 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 21:27:44 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/header.h"

int	ft_file_size(char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	if (str[i] == '0' && (!(str[i + 1] >= '0' && str[i + 1] <= '9')))
		return (0);
	while (str[i] != ':' || str[i] != '\0')
	{
		if (str[i] == '0')
			res += 100;
		else if (str[i] >= '1' && str[i] <= '9')
			res = res + str[i];
		i++;
	}
	return (res);
}

int	ft_check_arg(char *arg)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = 0;
	while (arg[i])
	{
		if (arg[i] > '9' || arg[i] < '0')
			return (1);
		i++;
	}
	i = 0;
	while (arg[i] == '0')
		i++;
	while (arg[i])
	{
		i++;
		tmp++;
	}
	if (tmp > 39)
		return (1);
	return (0);
}
