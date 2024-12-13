/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void sort(void *data, char **args)
{
    linked_list_t **head = data;
    int i = 0;
    int is_reversed = 0;
    sort_type_t sort_type;

    if (args[0] != NULL) {
        if (args[1] != NULL && args[1][0] == '-') {
            is_reversed = 1;
        }
        sort_type = sort_material_type(args[0]);
        select_sort(head, sort_type, is_reversed);
        is_reversed = 0;
    }
}
