/*
** EPITECH PROJECT, 2022
** get_nbr
** File description:
** arthemis lib
*/

static int a_is_number(const char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int a_get_nbr(const char *str)
{
    int nbr = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (a_is_number(str[i]))
            nbr = nbr * 10 + (str[i] - '0');
        else
            break;
    }
    return nbr;
}
