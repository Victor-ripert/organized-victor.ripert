/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:str_to_nbr.c
** desc
*/
#include "bootstrap.h"
#include <stdio.h>

int my_strcmp(char *str_1, char *str_2)
{
    // printf("---------\n");
    // printf("my_strcmp(%s, %s)\n", str_1, str_2);
    for (int i = 0; str_1[i] != '\0' && str_2[i] != '\0'; i++) {
        // printf("str_1[i]-->%c, str_3[i]-->%c\n", str_1[i], str_2[i]);
        if (str_1[i] != str_2[i]) {
            return str_1[i] - str_2[i];
        }
    }
    return 0;
}
