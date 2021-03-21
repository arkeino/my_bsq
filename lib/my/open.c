/*
** EPITECH PROJECT, 2021
** sdfg
** File description:
** dfgh
*/

#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../include/my.h"

char **create_tab(char **tab, char **av)
{
    struct stat s;
    int size;
    int fd;
    int res;
    char *buffer;
    int row;
    int col;

    stat(av[1], &s);
    size = s.st_size;
    buffer = malloc(sizeof(char) * (size + 1));
    fd = open(av[1], O_RDONLY);
    res = read(fd, buffer, size);
    buffer[res] = '\0';
    row = my_getnbr(buffer);
    col = count_col(buffer);
    tab = fill_map(buffer, size, tab);
    close(fd);
    return (tab);
}
