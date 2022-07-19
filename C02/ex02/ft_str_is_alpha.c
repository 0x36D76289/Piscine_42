/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:47:09 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/10 18:28:09 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_min_alpha(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_max_alpha(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_is_min_alpha(str[i]) || ft_is_max_alpha(str[i])))
			return (0);
		i++;
	}
	return (1);
}
