//
// Created by cel on 24/07/22.
//

#include "main.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    ft_putstrstr(char **str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putstr(str[i]);
        ft_putchar(' ');
        i++;
    }
}