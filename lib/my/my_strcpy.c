/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** Task01
*/

#include <stdio.h>
#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
