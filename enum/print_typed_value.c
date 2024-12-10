/*
** EPITECH PROJECT, 2024
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include "bootstrap.h"
#include <stdio.h>

int print_typed_value(void *data, type_t type)
{
    if (type == CHAR) {
	char c = *(char *)data;
	printf("%c\n", c);
    }
    if (type == STRING) {
	char *str = data;
        printf("%s\n", str);
    }
    if (type == INTEGER) {
	int nb = *(int *)data;
        printf("%d\n", nb);
    }
    if (type == PLAYER) {
	player_t player = *(player_t *)data;
	printf("%s: lvl.%d\n", player.name, player.lvl);
    } else {
	return 84;
    }
    return 0;
}
