/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:12:51 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/26 19:05:26 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < length)
	{
		if (f(tab) != 0)
			sum++;
		i++;
	}
	return (sum);
}
