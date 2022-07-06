##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for artemis lib
##

SRC	=	digits/a_get_nbr.c	\
		digits/a_is_digit.c	\
		digits/a_sort_int_array.c	\
		digits/a_create_int_tab.c	\
		display/a_putchar.c	\
		display/a_putstr.c 	\
		display/a_putnbr.c		\
		display/a_putwordarray.c	\
		math/a_abs.c	\
		math/a_sqrt.c	\
		math/a_power.c	\
		string/a_strcat.c	\
		string/a_strcmp.c	\
		string/a_strlen.c	\
		string/a_len_to_char.c	\
		string/a_trim.c	\
		string/a_revstr.c	\
		string/a_word_array_len.c	\
		string/a_stwa.c	\
		utilities/a_calloc.c	\
		utilities/a_memcpy.c	\
		utilities/a_realloc.c	\
		utilities/a_free.c	\
		utilities/a_get_input.c	\
		data_structure/linked_list/init.c	\
		data_structure/linked_list/append.c	\
		data_structure/linked_list/remove.c	\
		data_structure/linked_list/display.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	artemis_lib

CFLAGS	=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc a_lib.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)

re:	fclean all
