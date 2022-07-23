/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:52:39 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/23 15:57:22 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*res;
	int	i;

	res = malloc(sizeof(int) * (length + 1));
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

