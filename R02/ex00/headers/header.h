/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:41:37 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/24 21:29:42 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

// write, malloc, free
# include <unistd.h>
# include <stdlib.h>

// open, read, close
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

// define
# define DEFAULT_PATH "./number.dict"

// struct
// typedef struct s_dict
// {
// 	char	*num;
// 	char	*word;
// }	t_dict;

// main.c
int		ft_atoi(char *str);
char	*ft_read_input(void);

// error.c
void	ft_putargc_error(void);
void	ft_putdict_error(void);

// libft.c
int		ft_zero_check(char *str);
int		ft_strlen(char *str);
int		ft_isspace(char *str);
char	*ft_split(char *tab);

// arg_check.c
int		ft_file_size(char *str);
int		ft_check_arg(char *arg);

// put_all
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putstr_res(char *str, char **tab, int i, int size);
void	ft_print(char *str, char **tab);

// convert_base_dict
int		ft_count_lines(int fd);
char	*ft_convert_num(char *num, int index);
void	ft_malloc_res(char **tab, int fd);
void	ft_fill_file(char **res, int fd);
char	**ft_conv_base_dict(void);

#endif
