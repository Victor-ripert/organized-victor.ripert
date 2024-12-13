/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

int str_compare(char *str, char *compare)
{
    if (my_strlen(str) != my_strlen(compare)) {
        return 0;
    }
    for (int i = 0; str[i] != '\0' && compare[i] != '\0'; i++) {
        if (str[i] != compare[i]) {
            return 0;
        }
    }
    return 1;
}
