/*
** EPITECH PROJECT, 2024
** Phoenix_Day4
** File description:
** my_isalnum
*/

#include "../include/my.h"

int my_isalnum(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((my_isdigit(i) == 1) || (my_isalpha(i) == 1))
            return 1;
        return 0;
    }
}
