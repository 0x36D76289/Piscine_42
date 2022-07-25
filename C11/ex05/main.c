/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:21:05 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/25 16:26:31 by cfrancie         ###   ########.fr       */
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

int	condition(int val1, int operator, int val2)
{
	if (val1 == false || val2 == false)
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
	void		(*fnc[5])(int, int);

	fnc[0] = &add;
	fnc[1] = &multple;
	fnc[2] = &modulo;
	fnc[3] = &moins;
	fnc[4] = &division;
	if (argc == 4)
	{
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
