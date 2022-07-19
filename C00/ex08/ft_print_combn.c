/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:41:06 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/08 10:17:38 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_lenint(int n, int *nums)
{
	int	i;
	int	tmp;

	tmp = 0;
	i = 0;

	while (n != 0 || nums[i] != "\0")
	{
		n /= 10;
		i++;
	}

	return (i);
}

void	ft_print(int *res, int n, int size)
{
	int	i;
	int	size;

	i = 0;
	while (res[i])
	{
		if (res[i] < 0)
		{
			while (size != 0)
			{
				ft_putchar('0');
				size--;
			}
		}
	}
}

void	ft_print_comb(int length)
{
	// affiche les combinaisons de nombres de 1 à 9
	
}


void	ft_print_combn(int n)
{
	// verifie si n est entre 1 et 9
	// si oui, affiche les combinaisons de nombres de 1 à 9
	
	if (n < 1 || n > 9)
	{
		return ;
	}
	

}
