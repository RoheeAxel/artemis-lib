/*
** EPITECH PROJECT, 2022
** revstr
** File description:
** arthemis lib
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

char *a_revstr(const char *str)
{
    int str_len = a_strlen(str);
    int j = 0;
    char *reverse_string = malloc(sizeof(char) * str_len);

    for (int i = str_len - 1; i >= 0; i--)
        reverse_string[j++] = str[i];
    return reverse_string;
}
