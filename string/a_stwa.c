/*
** EPITECH PROJECT, 2022
** a str to word array
** File description:
** turn a str into array of word
*/

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

static int run_until_new_word(char const *str, int i, char lim)
{
    if (str[i] == lim) {
        while (str[i] == lim)
            i++;
        i -= 1;
    }
    return (i);
}

static int count_word(char const *str, char lim)
{
    int i = 0;
    int res = 1;

    while (str[i]) {
        i = run_until_new_word(str, i, lim);
        res += 1;
        i++;
    }
    return (res);
}

static int word_size(char *str, int i, char lim)
{
    int len = 0;

    while (str[i] != lim && str[i]) {
        len++;
        i++;
    }
    return (len);
}

char **a_stwa(char *str, char lim)
{
    int nb_word = count_word(str, lim) + 2;
    int i = 0;
    char **tab;
    int y = 0;
    int x = 0;

    tab = malloc(sizeof(char *) * nb_word + 1);
    while (str[i]) {
        x = 0;
        for (i = i; str[i] == lim && str[i]; i++);
        tab[y] = malloc(sizeof(char) * (word_size(str, i, lim) + 1));
        for (i = i; str[i] != lim && str[i]; i++ , x++)
            tab[y][x] = str[i];
        tab[y][x] = '\0';
        y++;
        for (i = i; str[i] == lim && str[i]; i++);
    }
    tab[y] = NULL;
    return (tab);
}
