/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

sort_type_t sort_material_type(char *type)
{
    str_to_material_type_t tab[3] = {
        {"ID", ID},
        {"NAME", NAME},
        {"TYPE", TYPE}
    };

    for (int i = 0; i < 3; i++) {
        if (str_compare(type, tab[i].name) == 1) {
            return tab[i].type;
        }
    }
    return ID;
}
