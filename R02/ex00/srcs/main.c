/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:43:17 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/23 18:10:20 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main(int argc, char const *argv[])
{
	if (argc < 2 && argc > 3)
	{
		write(1, "Argument error\n", 16);
		return (0);
	}
	if (argc == 2)
	{
		
	}
}
