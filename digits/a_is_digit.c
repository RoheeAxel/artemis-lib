/*
** EPITECH PROJECT, 2022
** is_digit
** File description:
** arthemis lib
*/

static int a_is_number(const char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int a_is_digit(const char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (a_is_number(str[i]) == 0)
            return 0;
    }
    return 1;
}
