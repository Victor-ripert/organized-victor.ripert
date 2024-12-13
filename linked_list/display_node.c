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

    my_putstr(material_type);
    my_putstr(" n°");
    my_put_nbr(node->id);
    my_putstr(" - \"");
    my_putstr((char *)node->data);
    my_putstr("\"\n");
}
