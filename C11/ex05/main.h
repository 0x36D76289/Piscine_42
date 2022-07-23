/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:06:53 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/23 19:47:04 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>

int		multiple(int a, int b);
int		plus(int a, int b);
int		moins(int a, int b);
int		modulo(int a, int b);
int		diviser(int a, int b);
int		ft_do_op(int val1, int operator, int val2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnum(int num);

# define FALSE 0
# define TRUE 1

#endif