/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:21:05 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/25 17:38:58 by cfrancie         ###   ########.fr       */
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

void	ft_condition(int val1, int val2, char ope)
{
	if (ope == '-')
		ft_putnum(moins(val1, val2));
	else if (ope == '+')
		ft_putnum(add(val1, val2));
	else if (ope == '/')
	{
		if (val2 == 0)
			ft_putstr("Stop : division by zero\n");
		else
			ft_putnum(division(val1, val2));
	}
	else if (ope == '*')
		ft_putnum(multple(val1, val2));
	else if (ope == '%')
	{
		if (val2 == 0)
			ft_putstr("Stop : division by zero\n");
		else
			ft_putnum(modulo(val1, val2));
	}
}

char	ft_find_ope(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == '+')
			return ('+');
		if (arg[i] == '-')
			return ('-');
		if (arg[i] == '*')
			return ('*');
		if (arg[i] == '/')
			return ('/');
		if (arg[i] == '%')
			return ('%');
		i++;
	}
	return (' ');
}

int	main(int argc, char *argv[])
{
	char	op;
	int		val1;
	int		val2;

	if (argc != 4)
		return (1);
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	op = ft_find_ope(argv[2]);
	if (op == ' ')
		return (1);
	ft_condition(val1, val2, op);
	return (0);
}
