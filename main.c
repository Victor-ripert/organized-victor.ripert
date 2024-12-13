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
    char *first_node = "first_node";
    linked_list_t *list = malloc(sizeof(linked_list_t));

    my_putstr("Changer \"WIRES\" -> \"WIRE\"\n");
    list->data = first_node;
    list->next = NULL;
    list->previous = NULL;
    list->type = ACTUATOR;
    list->id = 0;
    while (x != 0) {
        x = workshop_shell(&list);
    }
    free(list);
    return 0;
}
