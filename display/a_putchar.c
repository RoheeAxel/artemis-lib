/*
** EPITECH PROJECT, 2022
** putchar
** File description:
** arthemis lib
*/

#include <unistd.h>

void a_putchar(char c, int file_descriptor)
{
    write(file_descriptor, &c, 1);
}
