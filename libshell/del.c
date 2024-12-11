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

    if (args != NULL) { //regler probleme del sans arguemnts (refler problèmes avec les agrs tout court).
        ref = str_to_nbr(args[0]);
        printf("Del\n");
        delete_node(head, ref);
    } else  {
        printf("No list here !!\n");
    }
}
