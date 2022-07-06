/*
** EPITECH PROJECT, 2022
** strim
** File description:
** arthemis lib
*/

#include "../include/my.h"
#include <stdlib.h>

char *a_trim(char *str)
{
    int len_str = a_strlen(str);
    int has_find_char = 0;
    int j = 0;
    char *trimed_str = malloc(sizeof(char) * len_str + 1);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            has_find_char = 1;
        if (has_find_char == 1) {
            trimed_str[j] = str[i];
            j++;
        }
    }
    return trimed_str;
}
