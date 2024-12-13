/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sort_compare_reversed(linked_list_t *minimum, linked_list_t *current, sort_type_t sort)
{
    int strcmp_result = 0;
    if (sort == ID) {
        if (current->id > minimum->id) {
            return 1;
        }
    }
    if (sort == NAME) {
        strcmp_result = my_strcmp((char *)current->data, (char *)minimum->data);
        if ( strcmp_result > 0) {
            return 1;
        }
    }
    if (sort == TYPE) {
        if (current->type > minimum->type) {
            return 1;
        }
    }
    return 0;
}

int sort_compare_normal(linked_list_t *minimum, linked_list_t *current, sort_type_t sort)
{
    int strcmp_result = 0;
    if (sort == ID) {
        if (current->id < minimum->id) {
            return 1;
        }
    }
    if (sort == NAME) {
        strcmp_result = my_strcmp((char *)current->data, (char *)minimum->data);
        if ( strcmp_result < 0) {
            return 1;
        }
    }
    if (sort == TYPE) {
        if (current->type < minimum->type) {
            return 1;
        }
    }
    return 0;
}

int sort_compare(linked_list_t *minimum, linked_list_t *current, sort_type_t sort, int is_reversed)
{
    if (is_reversed == 0) {
        return sort_compare_normal(minimum, current, sort);
    } else {
        return sort_compare_reversed(minimum, current, sort);
    }
}

void select_sort(linked_list_t **head, sort_type_t type, int is_reversed)
{
    linked_list_t **first_unsorted_node = head;
    linked_list_t **minimum = head;
    linked_list_t **current = head;
    int result_compare = 0;

    while ((*first_unsorted_node) != NULL) {
        minimum = first_unsorted_node;
        while ((*current) != NULL) {
            result_compare = sort_compare((*minimum), (*current), type, is_reversed);
            if (result_compare == 1) {
                minimum = current;
            }
            current = &(*current)->next;
        }
        swap_in_list(first_unsorted_node, minimum);
        first_unsorted_node = &(*first_unsorted_node)->next;
        current = first_unsorted_node;
    }
}
