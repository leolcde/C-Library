/*
** EPITECH PROJECT, 2024
** Library
** File description:
** my_put_long
*/

#include "../include/my.h"

int my_put_long(long nb)
{
    if (nb < 0) {
        my_put_char('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_put_char('0' + (nb % 10));
}
