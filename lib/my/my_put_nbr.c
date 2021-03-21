/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** Task07
*/

#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int i;

    if (nb >= 0)
        i = nb;
    if (nb < 0) {
        i = nb * -1;
        my_putchar('-');
    }
    if (nb >= 10 || nb <= (-10))
        my_put_nbr(i / 10);
    my_putchar((i % 10) + '0');
    return (0);
}
