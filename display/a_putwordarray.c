/*
** EPITECH PROJECT, 2022
** putwordarray
** File description:
** arthemis lib
*/

#include <unistd.h>
#include "../include/my.h"

void a_putwordarray(char **word_array, int file_desc, char separator)
{
    if (word_array[0])
        a_putstr(word_array[0], file_desc);
    for (int i = 1;word_array[i]; i++) {
        a_putchar(separator, file_desc);
        a_putstr(word_array[i], file_desc);
    }
}
