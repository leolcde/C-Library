##
## EPITECH PROJECT, 2024
## mkfile
## File description:
## mkfile
##

.SILENT:

CC	=	gcc

SRC	=	src/free_array.c \
		src/is_prime_number.c \
		src/my_getnbr.c \
		src/my_isalpha.c \
		src/my_isdigit.c \
		src/my_isalnum.c \
		src/my_isnumber.c \
		src/my_linkedlist_len.c \
		src/my_printf.c \
		src/my_put_char.c \
		src/my_put_expo.c \
		src/my_put_expomaj.c \
		src/my_put_float.c \
		src/my_put_hexa.c \
		src/my_put_hexamaj.c \
		src/my_put_long.c \
		src/my_put_nbr.c \
		src/my_put_nbr_str.c \
		src/my_put_oct.c \
		src/my_put_ptr.c \
		src/my_put_str.c \
		src/my_put_unsigned.c \
		src/my_rev_str.c \
		src/my_str_cmp.c \
		src/my_strcpy.c \
		src/my_strdup.c \
		src/my_strlen.c \
		src/my_strncmp.c \
		src/my_strstr.c \
		src/my_str_to_word_array.c \
		src/sort_by_char.c \

SRC2 =  include/my.h    \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	 rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all
