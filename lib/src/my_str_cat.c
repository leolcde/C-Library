/*
** EPITECH PROJECT, 2025
** RepoMini_shell1
** File description:
** my_str_cat
*/

#include "../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int l = 0;
    int a = 0;

    for (l; dest[l] != '\0'; l++);
    for (1; src[a] != '\0'; a++) {
        dest[l] = src[a];
        l++;
    }
    dest[l] = '\0';
    return dest;
}
