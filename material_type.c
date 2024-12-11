/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

int str_compare(char *str, char *compare)
{
    for (int i = 0; str[i] != '\0' && compare[i] != 0; i++) {
        if (str[i] != compare[i]) {
            return 0;
        }
    }
    return 1;
}

material_t material_type(char *type)
{
    str_to_material_t tab[6] = {
        {"ACTUATOR", ACTUATOR},
        {"DEVICES", DEVICES},
        {"PROCESSOR", PROCESSOR},
        {"SENSOR", SENSOR},
        {"WIRES", WIRES},
    };

    for (int i = 0; i < 5; i++) {
        if (str_compare(type, tab[i].name) == 1) {
            return tab[i].type;
        }
    }
    return UNKNOWN;
}
