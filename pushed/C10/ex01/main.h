/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:16:31 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/28 17:54:05 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <libgen.h>

void	ft_strclean(char *str, int size);
void	ft_putstr(char *str);
int		ft_error(char *file);
int		ft_print_file(char *file);
int		ft_find_file(char *file);
void	ft_putno_param(int fd);

#endif