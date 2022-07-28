/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:01:04 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/07 17:22:17 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	i;
	int	tmp;

	start = 0;
	while (start < size)
	{
		i = start + 1;
		while (i < size)
		{
			if (tab[i] < tab[start])
			{
				tmp = tab[i];
				tab[i] = tab[start];
				tab[start] = tmp;
				break ;
			}
			i++;
		}
		start++;
	}
}
