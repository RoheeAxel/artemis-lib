/*
** EPITECH PROJECT, 2022
** strcmp
** File description:
** arthemis lib
*/

int a_strcmp(const char *str1, const char *str2)
{
    int i = 0;

    while (str1[i] && str2[i]) {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
        return 0;
    return str1[i] - str2[i];
}
