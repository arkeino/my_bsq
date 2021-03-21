/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** Task03
*/

#include <criterion/criterion.h>
#include <stdio.h>
#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
