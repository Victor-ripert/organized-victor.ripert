/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void display_list(linked_list_t *begin, void (*disp_fct)())
{
    linked_list_t *temp;

    temp = begin;
    while (temp != NULL) {
        disp_fct(temp->data);
        temp = temp->next;
    }
}
