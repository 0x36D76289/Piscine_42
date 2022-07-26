/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:17:03 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/26 21:34:03 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	side;

	i = 0;
	while (i < length - 1)
	{
		side = f(tab[i], tab[i + 1]);
		if (side != 0)
			break ;
		i++;
	}
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0 && side < 0)
			return (0);
		if (f(tab[i], tab[i + 1]) < 0 && side > 0)
			return (0);
		i++;
	}
	return (1);
}
