/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:35:27 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/20 14:04:00 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_dooble(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	get_ac(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (ft_dooble(str[i], charset))
			i++;
		if (!ft_dooble(str[i], charset) && str[i])
		{
			count++;
			while (!ft_dooble(str[i], charset) && str[i])
				i++;
		}
	}
	return (count + 1);
}

char	*ft_get_next_word(int *index, char *str, char *charset)
{
	int		len;
	char	*res;
	int		i;

	i = 0;
	len = 0;
	while (ft_dooble(str[*index], charset))
		(*index)++;
	while (!ft_dooble(str[*index + len], charset) && str[*index + len])
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return ('\0');
	while (i < len)
	{
		res[i++] = str[*index];
		*index = *index + 1;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		ac;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ac = get_ac(str, charset);
	res = malloc(ac * sizeof(char *));
	if (!res)
		return ('\0');
	while (i < ac - 1)
	{
		res[i] = ft_get_next_word(&j, str, charset);
		i++;
	}
	res[i] = 0;
	return (res);
}
