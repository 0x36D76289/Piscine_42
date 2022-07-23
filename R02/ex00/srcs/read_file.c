/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:52:51 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/23 19:03:56 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

char	**res_file(int	nbr)
{
	char	**res;
	char	*nums;
	char	*var;
	int		file;
	int		i;

	file = open("../numbers.dict", O_RDONLY);
	i = read(file, var, BUF_SIZE);
	while (i && )
	{
		i = read(file, var, BUF_SIZE);
	
	}

}