/*
** EPITECH PROJECT, 2024
** Library
** File description:
** file
*/

#include "../include/my.h"

int end_of_str(char *str)
{
    int i = my_strlen(str) - 1;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
        i--;
    }
    return i;
}

char *clean_str(char *str)
{
    int i = 0;
    int j = 0;
    int end = end_of_str(str);
    char *tmp = malloc(sizeof(char) * my_strlen(str));

    for (; str[i] == ' ' || str[i] == '\t'; i++);
    for (; i <= end; i++) {
        if (str[i] != ' ' || str[i + 1] == ' ' ||
        str[i] != '\t') {
        tmp[j] = str[i];
        j++;
    }
    for (; str[i] == ' ' && str[i + 1] == ' ' || str[i] == '\t'; i++);
    }
    tmp[j] = '\0';
    return tmp;
}
