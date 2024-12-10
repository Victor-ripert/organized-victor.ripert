/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void select_sort(linked_list_t **head)
{
    linked_list_t *first_unsorted_node = (*head);
    linked_list_t *minimum = (*head);
    linked_list_t *current = (*head);

    printf("select_sort\n");
    while (first_unsorted_node != NULL) {
        minimum = first_unsorted_node;
        printf("1ere bboucle\n");
        while (current != NULL) {
            printf("2nd boucle\n");
            if (current->data < minimum->data) {
                minimum = current;
            }
            current = current->next;
        }
        printf("swap = %d -> minimum = %d\n", *(int *)first_unsorted_node->data, *(int *)minimum->data);
        swap_in_list(&first_unsorted_node, &minimum);
        first_unsorted_node = first_unsorted_node->next;
        current = first_unsorted_node;
    }
}
