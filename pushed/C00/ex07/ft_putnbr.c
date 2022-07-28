/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:38:47 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/08 11:58:48 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned long	new;

	new = nb;
	if (new == 2147483647)
	{
		write(1, "2147483647", 10);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		new = -new;
	}
	if (new / 10 > 0)
		ft_putnbr(new / 10);
	ft_putchar((new % 10) + '0');
}
