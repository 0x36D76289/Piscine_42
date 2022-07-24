//
// Created by cel on 24/07/22.
//

#include "main.h"

int space_line(char *line)
{
    int i;

    i = 0;
    while (line[i])
    {
        if (line[i] != ' ')
            return (0);
        i++;
    }
    return (i);
}

void    get_next_line(int fd, char *line)
{
    // scans the next line and converts it to a string, if there are only spaces then we go to the next line
    char *res;
    int i;

    i = 0;
    while (read(fd, line, 1) > 0)
    {
        if (line[0] == '\n')
        {
            line[0] = '\0';
            return ;
        }
        line[i] = line[0];
        i++;
    }
    line[i] = '\0';
    if (space_line(line))
        get_next_line(fd, line);
}

char *take_num(char *line)
{
    // recover numeric characters before the :
    char *res;
    int i;

    i = 0;
    while (line[i] == ' ')
        i++;
    i++;
    while (line[i] >= '0' && line[i] <= '9')
    {
        res[i] = line[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

char *take_word(char *line)
{
    // retrieve the string before the spaces and after the :
    char *res;
    int i;

    i = 0;
    while (line[i] != ':')
        i++;
    i++;
    while (line[i] == ' ')
        i++;
    while (line[i] != ' ' || line[i] != '\0')
    {
        res[i] = line[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

t_list *take_value(char *file_path)
{
    t_list *res;
    int fd;
    char *line;
    char *num;
    char *word;
    int i;

    res = malloc(sizeof(t_list));
    fd = open(file_path, O_RDONLY);
    i = 0;
    while (get_next_line(fd, line) > 0)
    {
        num = take_num(line);
        word = take_word(line);
        res[i].num = num;
        res[i].word = word;
        i++;
    }
    close(fd);
    return (res);
}