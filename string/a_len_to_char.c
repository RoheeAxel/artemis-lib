/*
** EPITECH PROJECT, 2022
** strlen
** File description:
** arthemis lib
*/

#include <stddef.h>

int a_len_to_char(const char *str, const char c)
{
    int len = 0;

    for (len = 0; str[len] != c; len++);
    return len;
}
