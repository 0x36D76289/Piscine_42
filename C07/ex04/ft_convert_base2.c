/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:26:12 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/19 18:45:07 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_good_base(char *str);

int	ft_whitespaces(char *str, int *i)
{
	int	sign;
	int	tmp;

	tmp = 0;
	sign = 1;
	while ((str[tmp] >= 9 && str[tmp] <= 13) || str[tmp] == 32)
		tmp++;
	while (str[tmp] && (str[tmp] == '+' || str[tmp] == '-'))
	{
		if (str[tmp] == '-')
			sign *= -1;
		tmp++;
	}
	*i = tmp;
	return (sign);
}

void	ft_rev_tab(char *str)
{
	int		i;
	int		size;
	char	tmp;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = tmp;
		i++;
	}
}

char	*ft_straloc(char *str, int size)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (size + 1));
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_itoa_base(int nb, char *base)
{
	char	res[33];
	int		i;
	int		sign;
	long	tmp;

	tmp = nb;
	i = 0;
	sign = 1;
	if (tmp < 0)
	{
		sign = 0;
		tmp *= -1;
	}
	while (tmp)
	{
		res[i] = base[tmp % ft_strlen(base)];
		tmp /= ft_strlen(base);
		i++;
	}
	if (sign == 0)
		res[i++] = '-';
	res[i] = '\0';
	ft_rev_tab(res);
	return (ft_straloc(res, ft_strlen(base)));
}
