/*
** EPITECH PROJECT, 2021
** dfghj
** File description:
** rfghj
*/

#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "include/my.h"

char **x_place(char **tab, info_square_t *square)
{
    for (int i = square->y; i < square->y + square->size && tab[i] != NULL; i++)
        for (int j = square->x; j < square->x + square->size
            && tab[i][j] != '\n'; j++)
            if (tab[i][j] != 'o' && tab[i][j] != '\0')
                tab[i][j] = 'x';
    return tab;
}