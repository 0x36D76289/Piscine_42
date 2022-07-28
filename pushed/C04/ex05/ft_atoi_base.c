/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:39:14 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/16 17:50:38 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
