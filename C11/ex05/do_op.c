/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:27:11 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/23 19:32:12 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_do_op(int val1, int operator, int val2)
{
	if (operator == 1)
		return (plus(val1, val2));
	if (operator == 2)
		return (moins(val1, val2));
	if (operator == 3)
		return (diviser(val1, val2));
	if (operator == 4)
		return (multiple(val1, val2));
	if (operator == 5)
		return (modulo(val1, val2));
	return (0);
}
