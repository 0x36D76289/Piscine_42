/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:27:34 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/10 15:34:41 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(char c)
{
	unsigned char	tmp;
	char			*base;

	base = "0123456789abcdef";
	tmp = (unsigned char)c;
	ft_putchar('\\');
	ft_putchar(base[tmp / 16]);
	ft_putchar(base[tmp % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 127 || (str[i] < 32))
		{
			ft_print_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
