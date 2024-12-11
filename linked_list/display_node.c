/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>


void display_node(linked_list_t *node)
{
    char *material_type = material_to_str(node->type);

    printf("%s n°%d - \"%s\"\n", material_type, node->id, (char *)node->data);
}
