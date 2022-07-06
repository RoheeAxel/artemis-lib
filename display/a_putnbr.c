/*
** EPITECH PROJECT, 2022
** putnbr
** File description:
** arthemis lib
*/

#include <unistd.h>

void a_putnbr(int nbr, int base)
{
    char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUV";
    long temp = 0;

    temp = nbr % base;
    nbr /= base;
    if (nbr > 0)
        a_putnbr(nbr, base);
    write(1, &charset[temp], 1);
}
