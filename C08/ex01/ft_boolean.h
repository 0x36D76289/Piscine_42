/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:10:48 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/19 19:46:29 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define EVEN(x) ((x % 2) == 0 ? 0 : 1)
# define EVEN_MSG "je suis la"
# define ODD_MSG "je suis pas la"
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

t_bool	ft_is_even(int nbr);
void	ft_putstr(char *str);

#endif