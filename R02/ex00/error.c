/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:46:36 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 20:05:26 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/header.h"

void	ft_putargc_error(void)
{
	write(1, "Error\n", 7);
}

void	ft_putdict_error(void)
{
	write(1, "Dict Error\n", 12);
}
