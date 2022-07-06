/*
** EPITECH PROJECT, 2022
** strcmp
** File description:
** arthemis lib
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

char *a_strcat(const char *str1, const char *str2)
{
    int len_str1 = a_strlen(str1);
    int len_cat = len_str1 + a_strlen(str2);
    char *cat = malloc(sizeof(char) * len_cat + 1);

    cat[len_cat] = '\0';
    for (int i = 0; str1[i] != '\0'; i++)
        cat[i] = str1[i];
    for (int i = 0; str2[i] != '\0'; i++)
        cat[i + len_str1] = str2[i];
    return cat;
}
