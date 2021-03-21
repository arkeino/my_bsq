/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** Task01
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"

char *my_strdup(char const *src)
{
    char *dup;
    int i = 0;
    int lengh = my_strlen(src) + 1;

    dup = malloc(sizeof(char) * lengh + 1);
    while (src[i]) {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
