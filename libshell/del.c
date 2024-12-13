/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void del(void *data, char **args)
{
    linked_list_t **head = data;
    int ref;
    int i = 0;

    while (args[i] != NULL) {
        ref = str_to_nbr(args[i]);
        delete_node(head, ref);
        i++;
    }
}
