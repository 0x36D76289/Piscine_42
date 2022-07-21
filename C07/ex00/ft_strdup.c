/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:51:46 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/19 18:48:27 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_tablen(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*res;
	int		size;
	int		i;

	size = ft_tablen(src) + 1;
	res = malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
