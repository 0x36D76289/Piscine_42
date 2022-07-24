//
// Created by cel on 24/07/22.
//

#include "main.h"

int ft_strlen(char *str, int index)
{
    int i;

    i = 0;
    while (str[index] != '\0')
    {
        i++;
        index++;
    }
    return (i);
}

char *convert_num(char *num, int index)
{
    char *res;
    int i;

    i = 1;
    res = (char *)malloc(sizeof(char) * (ft_strlen(num, index) + 1));
    res[0] = num[index];
    if (index == ft_strlen(num, 0))
        return (res);
    while (num[index] != '\0')
    {
        res[i] = 0;
        i++;
        index++;
    }
    return (res);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

char    **ft_putnum_convert(t_list *list, char *num)
{
    // look in the structure list if a word variable matches the number, if yes we add it to a list
    char **res;
    int i;
    int j;

    i = 0;
    j = 0;
    res = (char **)malloc(sizeof(char *) * (ft_strlen(num, 0) + 1));
    while (num[i] != '\0')
    {
        j = 0;
        while (list[j].word != '\0')
        {
            if (ft_strcmp(list[j].word, convert_num(num, i)) == 0)
            {
                res[i] = list[j].word;
                break;
            }
            j++;
        }
        i++;
    }
    return (res);
}


void    ft_putstrstr(char **str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putstr(str[i]);
        ft_putchar('\n');
        i++;
    }
}