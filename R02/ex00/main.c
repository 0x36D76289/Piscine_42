//
// Created by cel on 24/07/22.
//

#include "main.h"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        if (verif_file(DEFAULT_PATH) == 0)
        {
            ft_putstr("File not found\n");
            return (0);
        }
        else
        {
            t_list *list;
            char **res;

            list = take_value(DEFAULT_PATH);
            res = ft_putnum_convert(list, argv[1]);
            ft_putstrstr(res);
            return (0);
        }
    }
    if (argc == 3)
    {
        if (verif_file(argv[2]) == 0)
        {
            ft_putstr("File not found\n");
            return (0);
        }
        else
        {
            t_list *list;
            char **res;

            list = take_value(argv[2]);
            res = ft_putnum_convert(list, argv[1]);
            ft_putstrstr(res);
            return (0);
        }
    }
    else
    {
        ft_putstr("Error: invalid number of arguments\n");
        return (0);
    }
    return (0);
}