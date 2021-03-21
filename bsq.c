/*
** EPITECH PROJECT, 2021
** bds
** File description:
** projet
*/

#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "include/my.h"

int count_col(char *buffer)
{
    int x = 0;
    int count = 0;

    while (buffer[x] != '\n')
        x++;
    x++;
    while (buffer[x] != '\n') {
        x++;
        count++;
    }
    return (count);
}

char **fill_map(char *buffer, int size, char **tab)
{
    int i = 0;
    int o = 0;
    int row = my_getnbr(buffer);
    int col = count_col(buffer);

    while (buffer[o] != '.' && buffer[o] != 'o')
        o++;
    tab = malloc(sizeof(char *) * (row + 1));
    for (int j = 0; i <= row; i++) {
        tab[i] = malloc(sizeof(char) * (col + 1));
        for (j = 0; j <= col && buffer[o] != '\0'; j++, o++) {
            tab[i][j] = buffer[o];
        }
        tab[i][j] = '\0';
    }
    tab[i] = NULL;
    return (tab);
}

int find_square(char **tab, int i, int j, int square)
{
    int itmp = i;
    int jtmp = j;

    while (itmp < square + i && tab[itmp] != NULL) {
        while (jtmp < square + j) {
            if (tab[itmp][jtmp] == '.')
                jtmp++;
            else 
                return 0;
        }
        itmp++;
        jtmp = j;
    }
    return 1;
}

int is_fill(char **tab, info_square_t *square)
{
    int o = 1;
    square->size = 0;
    int i = 0;
    int j = 0;

    for (;tab[i] != NULL; i++) {    
        for (; tab[i][j] != '\n' && tab[i][j] != '\0'; j++) {
            if (tab[i][j] == '.') {
                o = find_square(tab, i, j, square->size);
                while (o == 1) {
                    square->x = j;
                    square->y = i;
                    square->size += 1;
                    o = find_square(tab, i, j, square->size);
                }
            }
            o = 1;
        }
        j = 0;
    }
    square->size -= 1;
    return (1);
}

int main(int ac, char **av)
{
    info_square_t *square = malloc(sizeof(info_square_t)); 
    if (ac != 2)
        return 84;
   char **tab = create_tab(tab, av);

    (is_fill(tab, square));
    tab = x_place(tab, square);
    for (int i = 0; tab[i] != NULL; i++)
        my_putstr(tab[i]);
    return (0);
}
