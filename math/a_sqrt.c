/*
** EPITECH PROJECT, 2022
** sqrt
** File description:
** arthemis lib
*/

static int compute_sqrt(int nb, int var)
{
    if (var * var == nb)
        return var;
    if (var * var < nb) {
        if ((var + 1) * (var + 1) <= nb)
            return compute_sqrt(nb,var + 1);
        return 0;
    }
    return compute_sqrt(nb,var / 2);
}

int a_sqrt(int nb)
{
    if (nb <= 0)
        return 0;
    return compute_sqrt(nb,nb);
}
