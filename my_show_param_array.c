/*
** EPITECH PROJECT, 2022
** my_show_param_array
** File description:
** day9
*/

#include <stdlib.h>
#include "include/my.h"

int my_show_param_array(struct info_param const *par)
{
    for (int i = 0; 1; i++) {
        if (par[i + 1].copy == NULL)
            break;
        my_putstr(par[i].copy);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        for (int k = 0; par[i].word_array[k]; k++) {
            my_putstr(par[i].word_array[k]);
            my_putchar('\n');
        }
    }
}
