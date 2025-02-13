##
## EPITECH PROJECT, 2024
## mkfile
## File description:
## mkfile
##

.SILENT:

CC	=	gcc
CFLAGS	=	-g

SRC	=	src/file.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	NAME

LIB	=	-L./lib -lmy
INCLUDE	=	-I./include

MAKE	=	make

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C lib
	$(CC) $(OBJ) $(LIB) $(INCLUDE) -o $(NAME) $(CFLAGS)

clean:
	@rm -f $(OBJ)
	@rm -f *.gcno
	@rm -f *.gcda
	@rm -f *.gcov
	$(MAKE) -C lib clean

fclean: clean
	@rm -f $(NAME)
	@rm -f coding-style-reports.log
	$(MAKE) -C lib fclean

re: fclean all

.PHONY: all clean fclean re