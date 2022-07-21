/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:26:03 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/20 13:55:03 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base, char *res);
int		ft_whitespaces(char *str, int *i);
char	*ft_itoa_base(int nb, char *base);

int	ft_index_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_good_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] <= ' ' || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	tmp;
	int	size;
	int	res;

	res = 0;
	i = 0;
	size = ft_good_base(base);
	if (size > 1)
	{
		sign = ft_whitespaces(str, &i);
		tmp = ft_index_base(base, str[i]);
		while (tmp != -1)
		{
			res = (res * size) + tmp;
			i++;
			tmp = ft_index_base(base, str[i]);
		}
		return (res * sign);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	long	tmp;

	if (ft_good_base(base_from) == 0 || ft_good_base(base_to) == 0)
		return (NULL);
	tmp = ft_atoi_base(nbr, base_from);
	if (tmp == 0)
	{
		res = malloc(sizeof(char) * 2);
		res[0] = base_to[0];
		res[1] = '\0';
		return (res);
	}
	res = malloc(sizeof(char) * (ft_strlen(ft_itoa_base(tmp, base_to)) + 1));
	if (!res)
		return (NULL);
	res = ft_itoa_base(tmp, base_to);
	return (res);
}
