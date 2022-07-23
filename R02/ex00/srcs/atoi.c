/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:58:20 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/23 19:02:30 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	ft_atoi(char *str)
{
	long	ret;
	int		sign;
	int		i;

	sign = 1;
	ret = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		str++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (long)(str[i] - '0');
		str++;
	}
	return ((int)(ret * sign));
}
