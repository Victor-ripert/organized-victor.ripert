/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include "bootstrap.h"
#include "shell.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 1;
    linked_list_t *list = NULL;

    while (x != 0) {
        x = workshop_shell(&list);
    }
    free(list);
    return 0;
}
