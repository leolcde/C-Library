/*
** EPITECH PROJECT, 2025
** Mini_shell1
** File description:
** my_put_error
*/

#include "../include/my.h"

int my_put_error(char *str)
{
    if (str == NULL)
        return 84;
    for (int i = 0; str[i] != '\0'; i++)
        write(2, &str[i], 1);
}
