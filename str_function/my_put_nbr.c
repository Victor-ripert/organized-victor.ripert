/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** put nbr
*/
#include "bootstrap.h"

int my_put_nbr(int nb)
{
    int b;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb / 10) {
        my_put_nbr(nb / 10);
    }
    b = nb % 10;
    my_putchar(b + '0');
    return 1;
}
