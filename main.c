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

// int main(void)
// {
//     char c = 'a';
//     char *str = "Hello World !";
//     int nb = 1234;
//     player_t player = {"Vic", 98};

//     print_typed_value(&c, CHAR);
//     print_typed_value(str, STRING);
//     print_typed_value(&nb, INTEGER);
//     print_typed_value(&player, PLAYER);
//     return 0;
// }


// Your function to compare :
int compare_function(void *data, void *ref)
{
    //printf("%d = %d ?\n", *(int*)data, *(int*)ref);
    if (*(int*)data == *(int*)ref) {
        //printf("return 1\n");
        return 1;
    }
    //printf("return 0\n");
    return 0;
}
// Your function to display :
// void display_function(void *data)
// {
//     printf("data = %d\n", *(int*)data);
// }

int main (void)
{
    // linked_list_t *list;

    // list = NULL;
    int a = 1;
    int x = 1;
    // int b = 2;
    // int c = 3;
    // int d = 4;
    // int e = 5;
    // push_to_list(&list, &a);
    // push_to_list(&list, &b);
    // push_to_list(&list, &c);
    // push_to_list(&list, &d);
    // push_to_list(&list, &e);
    // display_list(list, &display_function);
    // select_sort(&list);
    // display_list(list, &display_function);
    // select_sort(&list);
    // //swap_in_list(&list, &list->next);
    // //delete_in_list(&list, &a, &compare_function);
    // printf("after delete\n");
    // display_list(list, &display_function);
    char *first_node = "first_node";
    linked_list_t *list = malloc(sizeof(linked_list_t));

    // push_to_list(&list, &first_node);
    list->data = first_node;
    list->next = NULL;
    list->previous = NULL;
    list->type = ACTUATOR;
    list->id = 0;
    display_list(list, &display_function);
    while (x != 0) {
        x = workshop_shell(&list);
        //printf("x = %d\n", x);
    }
    printf("x = %d\n", x);
    free(list);
    return 0;
}