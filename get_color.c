/*
** EPITECH PROJECT, 2022
** get_color
** File description:
** day9
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int color = 0;
    color = color << 8;
    color += red;
    color = color << 8;
    color += green;
    color = color << 8;
    color += blue;
    return color;
}
