/*
** EPITECH PROJECT, 2025
** Mini_shell1
** File description:
** my_str_delim
*/

#include "../include/my.h"

bool is_delimiter(char c, const char *delimiters)
{
    for (int i = 0; delimiters[i] != '\0'; i++) {
        if (c == delimiters[i])
            return true;
    }
    return false;
}

int count_of_word_delim(const char *str, const char *delimiters)
{
    int count = 0;
    bool in_word = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_delimiter(str[i], delimiters)) {
            in_word = false;
            continue;
        }
        if (!in_word) {
            in_word = true;
            count++;
        }
    }
    return count;
}

int len_delim(const char *str, int start, const char *delimiters)
{
    int length = 0;

    while (str[start] != '\0' && !is_delimiter(str[start], delimiters)) {
        length++;
        start++;
    }
    return length;
}

void copy_word(char *dest, const char *src, int start, int length)
{
    for (int j = 0; j < length; j++) {
        dest[j] = src[start + j];
    }
    dest[length] = '\0';
}

char **my_str_to_word_array(const char *str, const char *delimiters)
{
    int words_total = count_of_word_delim(str, delimiters);
    char **array = malloc(sizeof(char *) * (words_total + 1));
    int k = 0;
    int length;

    for (int i = 0; i < words_total; i++) {
        while (str[k] != '\0' && is_delimiter(str[k], delimiters))
            k++;
        length = len_delim(str, k, delimiters);
        array[i] = malloc(sizeof(char) * (length + 1));
        copy_word(array[i], str, k, length);
        k += length;
    }
    array[words_total] = NULL;
    return array;
}
