/*
** EPITECH PROJECT, 2022
** sort_int_array
** File description:
** arthemis lib
*/

#include "../include/my.h"

void a_sort_int_array(int *array, int size)
{
    int j = 0;
    int temp = 0;

    while (j < size){
        if (*(array + j) > *(array + j + 1)){
            temp = *(array + j);
            *(array + j) = *(array + j + 1);
            *(array + j + 1) = temp;
            j = -1;
        }
        j = j + 1;
    }
}
