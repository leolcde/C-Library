/*
** EPITECH PROJECT, 2024
** Organized
** File description:
** my_isdigit
*/

#include "../include/my.h"

int my_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}
