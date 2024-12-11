/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

char *material_to_str(material_t type)
{
    char *result;
    str_to_material_t tab[6] = {
        {"ACTUATOR", ACTUATOR},
        {"DEVICES", DEVICES},
        {"PROCESSOR", PROCESSOR},
        {"SENSOR", SENSOR},
        {"WIRES", WIRES},
    };

    for (int i = 0; i < 5; i++) {
        if (type == tab[i].type) {
            result = my_str_dup(tab[i].name);
            return result;
        }
    }
    return "UNKNOW";
}