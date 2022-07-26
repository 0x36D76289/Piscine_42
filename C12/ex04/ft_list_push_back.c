/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:38:08 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/26 15:55:06 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*res;
	t_list	*tmp;

	res = ft_create_elem(data);
	if (!(*begin_list))
		*begin_list = res;
	else
	{
		tmp = *begin_list->next;
		while (tmp)
		{
			tmp = *begin_list->next;
			if (*begin_list->next == NULL)
			{
				*begin_list->next = res;
				break ;
			}
		}
	}
}
