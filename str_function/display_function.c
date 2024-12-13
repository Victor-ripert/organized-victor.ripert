/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void display_function(void *data)
{
    my_putstr("data = ");
    my_putstr((char *)data);
    my_putstr("\n");
}
