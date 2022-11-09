/*
** EPITECH PROJECT, 2022
** swap_endian_color
** File description:
** day9
*/

int swap_endian_color(int color)
{
    int new_color = 0;
    unsigned char a = color >> 0;
    unsigned char red = color >> 8;
    unsigned char green = color >> 16;
    unsigned char blue = color >> 24;
    new_color += blue;
    new_color = new_color << 8;
    new_color += green;
    new_color = new_color << 8;
    new_color += red;
    new_color = new_color << 8;
    new_color += a;
    return new_color;
}
