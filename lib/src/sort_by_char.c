/*
** EPITECH PROJECT, 2025
** Library
** File description:
** sort_by_char
*/

#include "../include/my.h"

void swap_char(char *a, char *b)
{
    char temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void process_swap(char *str, int i, int j)
{
    if (str[i] > str[j]) {
        swap_char(&str[i], &str[j]);
    }
}

void sort_by_char(char *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            process_swap(str, i, j);
        }
    }
}
