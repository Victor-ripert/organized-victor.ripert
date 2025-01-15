/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void push_to_list(linked_list_t **begin, void *data, material_t type, int id)
{
    linked_list_t *temp = malloc(sizeof(linked_list_t));

    temp->data = data;
    temp->type = type;
    temp->id = id;
    temp->previous = NULL;
    temp->next = *begin;
    if ((*begin == NULL)) {
        (*begin) = temp;
        display_node_add(temp);
        return;
    }
    if ((*begin)->data == NULL) {
        (*begin) = temp;
    } else {
        (*begin)->previous = temp;
        (*begin) = temp;
    }
    display_node_add(temp);
}
