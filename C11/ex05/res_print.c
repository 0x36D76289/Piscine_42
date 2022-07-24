/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:27:11 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 17:49:22 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/main.h"

int	ft_do_op(int val1, int operator, int val2)
{
	if (operator == 1)
		return (val1 + val2);
	if (operator == 2)
		return (val1 - val2);
	if (operator == 3)
		return (val1 / val2);
	if (operator == 4)
		return (val1 * val2);
	if (operator == 5)
		return (val1 % val2);
	return (val1);
}
