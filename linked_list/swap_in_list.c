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
    (*first_node)->data = (*second_node)->data;
    (*second_node)->data = temp.data;
}
