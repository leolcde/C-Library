/*
** EPITECH PROJECT, 2025
** Mini_shell1
** File description:
** print_args
*/

#include "../include/my.h"

char **print_array(char **args)
{
    for (int i = 0; args[i] != NULL; i++) {
        my_put_str(args[i]);
        my_put_char('\n');
    }
}