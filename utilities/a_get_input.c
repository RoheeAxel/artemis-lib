/*
** EPITECH PROJECT, 2022
** a_getinput
** File description:
** for artemis lib
*/

#include "../include/my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *a_get_input(void)
{
    char *input = NULL;
    size_t size = 0;
    ssize_t line_size;

    line_size = getline(&input, &size, stdin);
    if (input[a_strlen(input) - 1])
        input[a_strlen(input) - 1] = '\0';
    return input;
}
