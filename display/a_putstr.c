/*
** EPITECH PROJECT, 2022
** putstr
** File description:
** arthemis lib
*/

#include <unistd.h>
#include "../include/my.h"

void a_putstr(const char *str, int file_descriptor)
{
    write(file_descriptor, str, a_strlen(str));
}
