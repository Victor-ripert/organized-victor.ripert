/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void add(void *data, char **args)
{
    linked_list_t **head = data;
    int i = 0;
    char *argument;
    material_t type;
    int id = 0;

    while (args[i] != NULL) {
        type = material_type(args[i]);
        if (args[i + 1] != NULL) {
            argument = my_str_dup(args[i + 1]);
            id = find_biggest_id(*head) + 1;
            if (type != UNKNOWN) {
                push_to_list(head, argument, type, id);
            }
        }
        i += 2;
    }
}
