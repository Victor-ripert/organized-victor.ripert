/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Shell Boostrap
** File description:
** bootstrap.h
*/

#ifndef BOOTSTRAP_H
    #define BOOTSTRAP_H

typedef enum type {
    CHAR,
    STRING,
    INTEGER,
    PLAYER
} type_t;

typedef struct player_s {
    char *name;
    int lvl;
} player_t;

typedef struct linked_list_s {
    void *data;
    struct linked_list_s *previous;
    struct linked_list_s *next;
} linked_list_t;

int print_typed_value(void *data, type_t type);
void push_to_list(linked_list_t **begin, void *data);
void delete_in_list(linked_list_t **begin, void const *ref, int (*cmp_fct)());
void display_list(linked_list_t *begin, void (*disp_fct)());
void push_to_list(linked_list_t **begin, void *data);
void swap_in_list(linked_list_t **first_node, linked_list_t **second_node);
void select_sort(linked_list_t **head);

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);

void display_char_array(char **array);
void display_function(void *data);

#endif /* BOOTSTRAP_H */
