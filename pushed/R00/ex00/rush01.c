/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:45:46 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/10 17:42:39 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, int y, int tmp_x, int tmp_y)
{
	if (tmp_x == 0 && tmp_y == 0)
		ft_putchar('/');
	else if (tmp_x == x && tmp_y == 0)
		ft_putchar('\\');
	else if (tmp_x == 0 && tmp_y == y)
		ft_putchar('\\');
	else if (tmp_x == x && tmp_y == y)
		ft_putchar('/');
	else if ((tmp_x == 0 || tmp_x == x) || (tmp_y == 0 || tmp_y == y))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	tmp_y;
	int	tmp_x;

	if (x <= 0 || y <= 0)
		return ;
	x -= 1;
	y -= 1;
	tmp_y = 0;
	while (tmp_y <= y)
	{
		tmp_x = 0;
		while (tmp_x <= x)
		{
			ft_print(x, y, tmp_x, tmp_y);
			tmp_x++;
		}
		ft_putchar('\n');
		tmp_y++;
	}
}
