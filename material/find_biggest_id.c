/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

int find_biggest_id(linked_list_t *begin)
{
    int biggest_id = 0;
    linked_list_t *temp = begin;

    while (temp != NULL) {
        if (temp->id > biggest_id) {
            biggest_id = temp->id;
        }
        temp = temp->next;
    }
    return biggest_id;
}
