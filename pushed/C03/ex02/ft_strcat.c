/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:50:06 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/12 14:05:22 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_dest;
	int	size_src;

	i = 0;
	size_dest = ft_lenstr(dest);
	size_src = ft_lenstr(src);
	while (i < size_src && src[i] != '\0')
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
