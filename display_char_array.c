/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void display_char_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        printf("%s\n", array[i]);
    }
}
