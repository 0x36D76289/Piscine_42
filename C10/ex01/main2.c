/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:13:41 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/28 18:05:08 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putno_param(int fd)
{
	char	tmp;
	int		lenght;

	lenght = read(fd, &tmp, 1);
	while (lenght)
	{
		if (lenght == -1)
			break ;
		write(1, &tmp, 1);
		lenght = read(fd, &tmp, 1);
	}
	close(fd);
}
