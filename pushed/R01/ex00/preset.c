/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:03:21 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/17 14:10:49 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_with_four_vertical_left(char **base, int line)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		base[line][i] = i;
		i++;
	}
}

void	add_with_four_horizontal_top(char **base, int colone)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		base[i][colone] = i;
		i++;
	}
}

void	add_with_four_verical_right(char **base, int line)
{
	int	i;
	int	tmp;

	i = 4;
	tmp = 1;
	while (i >= 1)
	{
		base[line][i] = tmp;
		i--;
		tmp++;
	}
}

void	add_with_four_horizontal_bot(char **base, int colone)
{
	int	i;
	int	tmp;

	i = 4;
	tmp = 1;
	while (i >= 1)
	{
		base[i][colone] = tmp;
		i--;
		tmp++;
	}
}
