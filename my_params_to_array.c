/*
** EPITECH PROJECT, 2022
** my_params_to_array
** File description:
** day9
*/

#include <stdlib.h>
#include "include/my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *info;
    info = malloc(sizeof(struct info_param) * ac);

    for (int i = 0; i < ac; i++) {
        info[i].length = my_strlen(av[i]);
        info[i].str = av[i];
        info[i].copy = av[i];
        info[i].word_array = my_str_to_word_array(av[i]);
    }
    return info;
}
