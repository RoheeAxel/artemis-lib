/*
** EPITECH PROJECT, 2022
** power
** File description:
** arthemis lib
*/

int a_pow(int nb, int power)
{
    int result = nb;
    for (int i = 1; i < power; i++)
        result *= nb;
    return result;
}
