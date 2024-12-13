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

typedef enum material_s {
    ACTUATOR = 0,
    DEVICES = 1,
    PROCESSOR = 2,
    SENSOR = 3,
    WIRES = 4,
    UNKNOWN = 5
} material_t;

typedef enum sort_type_s {
    TYPE = 0,
    NAME = 1,
    ID = 2
} sort_type_t;

typedef struct str_to_material_s {
    char *name;
    material_t type;
} str_to_material_t;

typedef struct str_to_material_type_s {
    char *name;
    sort_type_t type;
} str_to_material_type_t;

typedef struct linked_list_s {
    void *data;
    material_t type;
    int id;
    struct linked_list_s *previous;
    struct linked_list_s *next;
} linked_list_t;

int print_typed_value(void *data, type_t type);
void delete_in_list(linked_list_t **begin, void const *ref, int (*cmp_fct)());
void display_list(linked_list_t *begin, void (*disp_fct)());
void push_to_list(linked_list_t **begin, void *data, material_t type, int id);
void swap_in_list(linked_list_t **first_node, linked_list_t **second_node);
void select_sort(linked_list_t **head, sort_type_t type, int is_reversed);
void display_node(linked_list_t *node);
void display_node_add(linked_list_t *node);
void delete_node(linked_list_t **begin, int ref);
void replace_ptr(linked_list_t **temp, linked_list_t **begin);
void display_node_del(linked_list_t *node);

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);

void display_char_array(char **array);
void display_function(void *data);

char *my_str_dup(char *str);
int my_strlen(char *str);
int my_strcmp(char *str_1, char *str_2);
int str_compare(char *str, char *compare);

material_t material_type(char *type);
int find_biggest_id(linked_list_t *begin);
char *material_to_str(material_t type);
int str_to_nbr(char *nb);
sort_type_t sort_material_type(char *type);

#endif /* BOOTSTRAP_H */
