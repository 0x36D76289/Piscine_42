/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:21:05 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 17:55:36 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/main.h"

int	ft_atoi(char *str)
{
	long	ret;
	int		sign;

	sign = 1;
	ret = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + (long)(*str - '0');
		str++;
	}
	return ((int)(ret * sign));
}

char	search_and_rep(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+')
			return (1);
		if (str[i] == '-')
			return (2);
		if (str[i] == '/')
			return (3);
		if (str[i] == '*')
			return (4);
		if (str[i] == '%')
			return (5);
		i++;
	}
	return (0);
}

int	condition(int val1, int operator, int val2)
{
	if (val1 == FALSE || val2 == FALSE)
	{
		write(1, "0\n", 2);
		return (1);
	}
	if (operator == 0)
	{
		write(1, "0\n", 2);
		return (1);
	}
	if (val2 == 0)
	{
		if (operator == '%')
		{
			write(1, "Stop : modulo by zero\n", 23);
			return (1);
		}
		else if (operator == '/')
		{
			write(1, "Stop : division by zero\n", 25);
			return (1);
		}
	}
	return (0);
}


int	main(int argc, char *argv[])
{
	int	operator;
	int	val1;
	int	val2;

	if (argc == 4)
	{
		val1 = ft_atoi(argv[3]);
		val2 = ft_atoi(argv[1]);
		operator = search_and_rep(argv[2]);
		if (condition(val1, operator, val2) == 0)
		{
			ft_putnum(ft_do_op(val1, operator, val2));
			ft_putchar('\n');
		}
		return (0);
	}
	return (-1);
}
