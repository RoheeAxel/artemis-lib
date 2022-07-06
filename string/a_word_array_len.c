/*
** EPITECH PROJECT, 2022
** word_array
** File description:
** arthemis lib
*/

#include <stddef.h>

int a_word_array_len(const char **str)
{
    int len = 0;

    for (len = 0; str[len]; len++);
    return len;
}
