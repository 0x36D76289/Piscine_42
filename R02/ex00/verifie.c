//
// Created by cel on 24/07/22.
//

int ft_atoi(char *str)
{
    int i;
    int res;

    i = 0;
    res = 0;
    while (str[i] == ' ')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res);
}

int verif_file(char *file_path)
{
    // check if the number works in the function atoi, that there is a : in the string if there are two string of caracetre which is not spaces after and before the :
    int fd;
    char *line;
    int i;

    i = 0;
    fd = open(file_path, O_RDONLY);
    while (get_next_line(fd, line) > 0)
    {
        i = 0;
        if (ft_atoi(line) == 0)
            return (0);
        while (line[i] != ':')
        {
            if (line[i] == '\0')
                return (0);
            i++;
        }
        while (line[i] == ' ')
            i++;
        if (line[i] == '\0')
            return (0);
        while (line[i] != '\0')
        {
            if (line[i] == ' ')
                return (0);
            i++;
        }
        i++;
    }
    return (1);
}