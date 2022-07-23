/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrancie <cfrancie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:43:15 by cfrancie          #+#    #+#             */
/*   Updated: 2022/07/23 18:58:15 by cfrancie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

// importe la fonction write
# include <unistd.h>
// importe les fonctions malloc, free
# include <stdlib.h>

// importe les fonctions open, read, close
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUF_SIZE 4096;

// importe les fonctions necessaires
int	ft_atoi(char *str);


#endif