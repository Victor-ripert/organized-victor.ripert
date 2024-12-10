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

void push_to_list(linked_list_t **begin, void *data)
{
    linked_list_t *temp = malloc(sizeof(linked_list_t));

    temp->data = data;
    temp->previous = NULL;
    temp->next = *begin;
    if ((*begin) == NULL) {
        (*begin) = temp;
    } else {
        (*begin)->previous = temp;
        (*begin) = temp;
    }
}
