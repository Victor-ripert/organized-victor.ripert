/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void disp(void *data, char **args)
{
    printf("Disp\n");
    // display_char_array(args);
    // linked_list_t *head = data;
    linked_list_t *temp = data;
    display_list(temp, &display_function);
}
