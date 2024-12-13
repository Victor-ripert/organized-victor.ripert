/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void delete_node(linked_list_t **begin, int ref)
{
    linked_list_t *temp;

    temp = *begin;
    while (temp != NULL) {
        if (temp->id == ref) {
            display_node_del(temp);
            replace_ptr(&temp, begin);
            free(temp);
            temp = *begin;
        } else {
            temp = temp->next;
        }
    }
}
