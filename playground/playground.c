/*
** EPITECH PROJECT, 2022
** playground
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

static write_print(char *input, int fd, char **word_array)
{
    a_putstr("printf(", fd);
    a_putchar('"', fd);
    a_putchar('%', fd);
    a_putstr(word_array[0], fd);
    a_putchar('"', fd);
    a_putchar(',', fd);
    a_putstr(input, fd);
    a_putchar(')', fd);
}

static int write_main(int fd, char **word_array)
{
    char *input;

    if (a_word_array_len(word_array) <= 1)
        input = word_array[0];
    else
        input = word_array[1];
    a_putstr("#include ", fd);
    a_putchar('"', fd);
    a_putstr("include/my.h", fd);
    a_putchar('"', fd);
    a_putchar('\n', fd);
    a_putstr("int main()\n{\n\t", fd);
    if (a_word_array_len(word_array) > 1) {
        write_print(input, fd, word_array);
    } else {
        a_putstr(input, fd);
    }
    a_putstr(";\n}", fd);
}

static exec_bash(void)
{
    system("gcc tmp.c a_lib.a -o tmp");
    system("clear");
    system("./tmp");
    a_putstr("\n",1);
    system("rm tmp.c tmp");
}

int main(int ac, char **av)
{
    system("clear");
    int running = 1;
    char *len;
    while (running != 0) {
        int fd = open("tmp.c",O_CREAT | O_TRUNC | O_WRONLY,
        S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
        a_putstr("artemis playground]$ ", 1);
        char **word_array = a_stwa(a_get_input(), ' ');
        running = a_strcmp(word_array[0], "exit");
        len = a_word_array_len(word_array);
        write_main(fd, word_array);
        close(fd);
        exec_bash();
    }
    system("make fclean");
    system("clear");
}
