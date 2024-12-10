/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void add(void *data, char **args)
{
    linked_list_t **head = data;
    printf("Add\n");
    display_char_array(args);
    //display_list(head, &display_function);
    char *argument = args[0];
    // char *argument2 = args[1];
    push_to_list(head, argument);
    // push_to_list(&head, argument2);
    display_list((*head), &display_function);
}
