/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my
*/

#ifndef MY_H
#define MY_H
typedef struct
{
    int x;
    int y;
    int size;
}info_square_t;


void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
char *my_strdup(char const *src);
char **create_tab(char **tab, char **av);
int count_col(char *buffer);
int is_fill(char **tab, info_square_t *square);
char **fill_map(char *buffer, int size, char **tab);
int find_square(char **tab, int i, int j, int square);
char **x_place(char **tab, info_square_t *square);

#endif /* !my */
