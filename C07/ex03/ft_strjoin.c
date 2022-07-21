/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:08:28 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/19 19:11:55 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_get_aloc(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	if (size == 0)
		return (1);
	i = 0;
	res = 0;
	while (i < size)
	{
		res += ft_strlen(strs[i]);
		i++;
	}
	res += ft_strlen(sep) * (size - 1);
	return (res);
}

char	*ft_strlcat(char *dest, char *src)
{
	int	i;
	int	size_dest;

	size_dest = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (ft_get_aloc(size, strs, sep) + 1));
	if (!res)
		return (NULL);
	res[0] = '\0';
	if (size == 0)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strlcat(res, strs[i]);
		if (i < size - 1)
			ft_strlcat(res, sep);
		i++;
	}
	return (res);
}
