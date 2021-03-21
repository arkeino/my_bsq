/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** Task03
*/

#include <criterion/criterion.h>
#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

char *my_revstr(char *str)
{
    int lengh = my_strlen(str);
    int i = 0;
    char swap;

    while (i < (lengh / 2)) {
        swap = str[i];
        str[i] = str[lengh - i - 1];
        str[lengh - i - 1] = swap;
        i++;
    }
    return (str);
}
