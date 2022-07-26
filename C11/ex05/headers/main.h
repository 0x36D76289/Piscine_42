/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:06:53 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/26 14:14:06 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdbool.h>

int		plus(int a, int b);
int		once(int a, int b);
int		modulo(int a, int b);
int		less(int a, int b);
int		division(int a, int b);
int		ft_strcmp(char *str1, char *str2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnum(int num);

#endif