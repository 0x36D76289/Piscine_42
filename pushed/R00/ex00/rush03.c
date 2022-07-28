/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:46:01 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/10 17:24:51 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, int y, int tmp_x, int tmp_y)
{
	if ((tmp_x == 0 && tmp_y == 0) || (tmp_x == 0 && tmp_y == y))
		ft_putchar('A');
	else if ((tmp_x == x && tmp_y == 0) || (tmp_x == x && tmp_y == y))
		ft_putchar('C');
	else if (tmp_x == 0 || tmp_x == x || tmp_y == 0 || tmp_y == y)
		ft_putchar('B');
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
	tmp_x = 0;
	while (tmp_y <= y)
	{
		while (tmp_x <= x)
		{
			ft_print(x, y, tmp_x, tmp_y);
			tmp_x++;
		}
		ft_putchar('\n');
		tmp_x = 0;
		tmp_y++;
	}
}
