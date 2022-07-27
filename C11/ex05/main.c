/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:21:05 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/27 14:03:12 by cfrancie         ###   ########.fr       */
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
		ret = ret * 10 + (long int)(*str - '0');
		str++;
	}
	return ((int)(ret * sign));
}

int	ft_find_ope(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == '+')
			return (1);
		if (arg[i] == '-')
			return (0);
		if (arg[i] == '*')
			return (3);
		if (arg[i] == '/')
			return (2);
		if (arg[i] == '%')
			return (4);
		i++;
	}
	return (-1);
}

void	ft_res(int (*listefonctions[5])(int, int), int val1, int val2, int op)
{
	if (op == -1)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	else if (listefonctions[op] == &division && val2 == 0)
		ft_putstr("Stop : division by zero\n");
	else if ((listefonctions[op] == &modulo && val2 == 0))
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnum(listefonctions[op](val1, val2));
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int	(*listefonctions[5])(int, int);
	int	op;
	int	val1;
	int	val2;

	listefonctions[0] = &less;
	listefonctions[1] = &plus;
	listefonctions[2] = &division;
	listefonctions[3] = &once;
	listefonctions[4] = &modulo;
	if (argc != 4)
		return (1);
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	op = ft_find_ope(argv[2]);
	ft_res(listefonctions, val1, val2, op);
	return (0);
}
