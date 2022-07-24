//
// Created by cel on 24/07/22.
//

#ifndef RUSH02_MAIN_H
# define RUSH02_MAIN_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "stdbool.h"

typedef struct s_list
{
    char *word;
    char *num;
}   t_list;

#define BUFFER_SIZE 32
#define DEFAULT_PATH "./"

// Functions
char    *get_num(char *str);
char    *get_word(char *str);
int     space_line(char *line);
void    get_next_line(int fd, char *line);
char    *take_num(char *line);
char    *take_word(char *line);
t_list  *take_value(char *file_path);
int     ft_strlen(char *str, int index);
char    *convert_num(char *num, int index);
int     ft_strcmp(char *s1, char *s2);
char    **ft_putnum_convert(t_list *list, char *num);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putstrstr(char **str);
int     ft_atoi(char *str);
int     verif_file(char *file_path);

#endif //RUSH02_MAIN_H
