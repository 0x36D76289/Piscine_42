/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:31:28 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 12:04:35 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i;
	char *line;
	char *addr_c;

	i = 0;
	line = (char *)addr;
	addr_c = (char *)addr;
	while  (i < size)
	{
		ft_putchar(line[i]);
		i++;
		if (i % 16 == 0)
		{
			ft_putchar('\n');
			i = 0;
			line = addr_c + 16;
			addr_c = addr_c + 16;
		}
	}
	if (i % 16 != 0)
		ft_putchar('\n');
	return (addr);
}