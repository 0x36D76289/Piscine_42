/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:58:40 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/10 18:36:05 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(char str)
{
	return ((str >= 'A') && (str <= 'Z'));
}

int	ft_islower(char str)
{
	return ((str >= 'a') && (str <= 'z'));
}

int	ft_isdigit(char str)
{
	return ((str >= '0') && (str <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	char	*s;
	int		i;
	int		bool_word;

	s = str;
	i = 0;
	while (s[i])
	{
		if (ft_isupper(s[i]) || ft_isdigit(s[i]) || ft_islower(s[i]))
		{
			bool_word = 1;
			if (ft_islower(s[i]))
				s[i] = s[i] - 32;
			while (bool_word)
			{
				i++;
				if (ft_isupper(s[i]))
					s[i] = s[i] + 32;
				if (!ft_isupper(s[i]) && !ft_isdigit(s[i]) && !ft_islower(s[i]))
					bool_word = 0;
			}
		}
		i++;
	}
	return (str);
}
