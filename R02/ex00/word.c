//
// Created by cel on 24/07/22.
//

#include "main.h"

char *get_num(char *str)
{
    // retrieves the string before the : and removing the spaces
    char *res;
    int i;

    i = 0;
    while (str[i] == ' ')
        i++;
    i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

char *get_word(char *str)
{
    // retrieves the string after the ':'
    char *res;
    int i;

    i = 0;
    while (str[i] == ' ')
        i++;
    i++;
    while (str[i] != ':' && str[i] != ' ')
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}
