/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:39:30 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/23 22:35:50 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_lenstr(char	*str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str_copy(char *str)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(sizeof(char) * (ft_lenstr(str) + 1));
	if (!copy)
		return (NULL);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
