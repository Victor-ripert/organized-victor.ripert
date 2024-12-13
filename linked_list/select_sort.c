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

int sort_compare_rev(linked_list_t *min, linked_list_t *cur, sort_type_t sort)
{
    int strcmp_result = 0;

    if (sort == ID) {
        if (cur->id > min->id) {
            return 1;
        }
    }
    if (sort == NAME) {
        strcmp_result = my_strcmp((char *)cur->data, (char *)min->data);
        if (strcmp_result > 0) {
            return 1;
        }
    }
    if (sort == TYPE) {
        if (cur->type > min->type) {
            return 1;
        }
    }
    return 0;
}

int sort_cmp_normal(linked_list_t *min, linked_list_t *cur, sort_type_t sort)
{
    int strcmp_result = 0;

    if (sort == ID) {
        if (cur->id < min->id) {
            return 1;
        }
    }
    if (sort == NAME) {
        strcmp_result = my_strcmp((char *)cur->data, (char *)min->data);
        if (strcmp_result < 0) {
            return 1;
        }
    }
    if (sort == TYPE) {
        if (cur->type < min->type) {
            return 1;
        }
    }
    return 0;
}

int sort_cmp(linked_list_t *min, linked_list_t *cur, sort_type_t sort, int rev)
{
    if (rev == 0) {
        return sort_cmp_normal(min, cur, sort);
    } else {
        return sort_compare_rev(min, cur, sort);
    }
}

linked_list_t **cmp_res(linked_list_t **cur, linked_list_t **min, int res_cmp)
{
    if (res_cmp == 1) {
        min = cur;
    }
    return min;
}

void select_sort(linked_list_t **head, sort_type_t type, int rev)
{
    linked_list_t **first_unsorted_node = head;
    linked_list_t **min = head;
    linked_list_t **cur = head;
    int result_compare = 0;

    while ((*first_unsorted_node) != NULL) {
        min = first_unsorted_node;
        while ((*cur) != NULL) {
            result_compare = sort_cmp((*min), (*cur), type, rev);
            min = cmp_res(cur, min, result_compare);
            cur = &(*cur)->next;
        }
        swap_in_list(first_unsorted_node, min);
        first_unsorted_node = &(*first_unsorted_node)->next;
        cur = first_unsorted_node;
    }
}
