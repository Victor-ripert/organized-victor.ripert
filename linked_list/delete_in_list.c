/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>
#include <stdlib.h>

void replace_ptr(linked_list_t **temp, linked_list_t **begin)
{
    if ((*temp)->previous != NULL) {
        (*temp)->previous->next = (*temp)->next;
    } else {
        *begin = (*temp)->next;
    }
    if ((*temp)->next != NULL) {
        (*temp)->next->previous = (*temp)->previous;
    }
}

void delete_in_list(linked_list_t **begin, void const *ref, int (*cmp_fct)())
{
    linked_list_t *temp;

    temp = *begin;
    while (temp != NULL) {
        if (cmp_fct(temp->data, ref) == 1) {
            //printf("%d\n", *(int*)temp->data);
            replace_ptr(&temp, begin);
            free(temp);
            temp = *begin;
        } else {
            //printf("Else\n");
            temp = temp->next;
        }
        //temp = *begin;
    }
}
