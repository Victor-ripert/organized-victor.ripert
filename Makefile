##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## make units tests
##

SRC =	main.c	\
	enum/print_typed_value.c	\
	linked_list/delete_in_list.c	\
	linked_list/display_list.c	\
	linked_list/push_to_list.c	\
	linked_list/swap_in_list.c	\
	linked_list/select_sort.c	\
	linked_list/display_node.c	\
	linked_list/display_node_add.c	\
	linked_list/display_node_del.c	\
	linked_list/delete_node.c	\
	linked_list/replace_ptr.c	\
	libshell/add.c	\
	libshell/del.c	\
	libshell/sort.c	\
	libshell/disp.c	\
	display_char_array.c	\
	display_function.c	\
	my_str_dup.c	\
	material_type.c	\
	sort_material_type.c	\
	find_biggest_id.c	\
	material_to_str.c	\
	str_to_nbr.c	\
	my_strlen.c	\
	my_strcmp.c	\
	str_compare.c

NAME	=	organized

OBJ	=	$(SRC:.c=.o)

CFLAGS += -g3 -iquote ./include

.PHONY: all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
	cp libshell/shell.h include/.
	gcc -o $(NAME) $(OBJ) -I./include -L./libshell -lshell

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)


re:	fclean  all
