/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void swap_in_list(linked_list_t **first_node, linked_list_t **second_node)
{
    linked_list_t temp;

    temp.data = (*first_node)->data;
    temp.id = (*first_node)->id;
    temp.type = (*first_node)->type;
    (*first_node)->data = (*second_node)->data;
    (*first_node)->id = (*second_node)->id;
    (*first_node)->type = (*second_node)->type;
    (*second_node)->data = temp.data;
    (*second_node)->id = temp.id;
    (*second_node)->type = temp.type;
}
