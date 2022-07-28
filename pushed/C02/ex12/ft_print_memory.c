/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:31:28 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/27 21:23:58 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_values(unsigned char *addr, int tmp)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (i < 16 && tmp - i)
	{
		ft_putchar(base[addr[i] / 16]);
		ft_putchar(base[addr[i] % 16]);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_put_address(unsigned long addr)
{
	char	*base;
	char	buffer[17];
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (addr)
	{
		buffer[i] = base[addr % 16];
		addr = addr / 16;
		i++;
	}
	while (i < 16)
	{
		buffer[i] = '0';
		i++;
	}
	i--;
	while (i + 1)
	{
		write(1, &buffer[i], 1);
		i--;
	}
	write(1, ": ", 2);
}

void	ft_put_char(unsigned char *addr, int tmp)
{
	int	i;

	i = 0;
	while (i < 16 && tmp--)
	{
		if (addr[i] >= ' ' && addr[i] <= '~')
			ft_putchar(addr[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	put;
	unsigned int	tmp;

	tmp = 0;
	put = (unsigned long)addr;
	(void)size;
	while (tmp < size)
	{
		ft_put_address(put + tmp);
		ft_put_values((unsigned char *)(put + tmp), size - tmp);
		ft_put_char((unsigned char *)(put + tmp), size - tmp);
		write(1, "\n", 1);
		tmp += 16;
	}
	return (addr);
}
