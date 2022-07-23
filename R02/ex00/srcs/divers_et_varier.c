/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divers_et_varier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:00:08 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/23 19:02:19 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
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
