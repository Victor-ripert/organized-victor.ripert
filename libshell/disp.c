/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void disp(void *data, char **args)
{
    linked_list_t **temp = data;
    if (temp != NULL) {
        display_list((*temp));
    }
}
