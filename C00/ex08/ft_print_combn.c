/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:41:06 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/21 14:29:35 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcombn(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_print_combn_rec(char	*str, int i)
{
	int	size;

	size = ft_lenstr(str);
	if (str[i])
	{

	}
}

void	ft_print_combn(int n)
{
	char	*res;
	int		i;
	
	i = 0;
	while (i < n)
	{
		res[i] = i;
		i++;
	}
	
}