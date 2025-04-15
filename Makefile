##
## EPITECH PROJECT, 2024
## mkfile
## File description:
## Makefile trop swag avec plein de couleurs et des emojis
##

.SILENT:

CC      = gcc
CFLAGS  = -g -Wall -Wextra -Werror
LDFLAGS = -L./lib -lmy
INCLUDE = -I./include
NAME    = C-Library
MAKE    = make

RED     = \033[1;31m
GREEN   = \033[1;32m
YELLOW  = \033[1;33m
BLUE    = \033[1;34m
PURPLE  = \033[1;35m
CYAN    = \033[1;36m
WHITE   = \033[1;37m
RESET   = \033[0m

CHECK   = ✅
HAMMER  = 🔨
TRASH   = 🗑️
ROCKET  = 🚀
GEAR    = ⚙️
LIBRARY = 📚
TEST    = 🧪

SRC_DIR = src
UTILS_DIR = utils

SRC     = $(SRC_DIR)/main.c             \

OBJ     = $(SRC:.c=.o)

all: header $(NAME) footer

$(NAME): $(OBJ)
	@printf "$(YELLOW)$(LIBRARY)  Building library...$(RESET)\n"
	@$(MAKE) -C lib --no-print-directory
	@printf "$(YELLOW)$(HAMMER)  Linking $(PURPLE)$(NAME)$(RESET)\n"
	@$(CC) $(OBJ) $(LDFLAGS) $(INCLUDE) -o $(NAME) $(CFLAGS)
	@printf "$(GREEN)$(CHECK)  $(PURPLE)$(NAME)$(GREEN) \
		successfully built!$(RESET)\n"

%.o: %.c
	@printf "$(YELLOW)$(GEAR)  Compiling $(CYAN)$<$(RESET)\n"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@printf "$(RED)$(TRASH)  Cleaning object files...$(RESET)\n"
	@rm -f $(OBJ)
	@rm -f *.gcno *.gcda *.gcov
	@$(MAKE) -C lib clean --no-print-directory

fclean: clean
	@printf "$(RED)$(TRASH)  Removing binary...$(RESET)\n"
	@rm -f $(NAME)
	@rm -f coding-style-reports.log
	@$(MAKE) -C lib fclean --no-print-directory

re: fclean all

bin: all clean

debug: CFLAGS += -DDEBUG
debug: all

release: CFLAGS += -O3 -DNDEBUG
release: all

test: all
	@printf "$(BLUE)$(TEST)  Running tests...$(RESET)\n"
	@./$(NAME) --test

header:
	@printf "$(PURPLE)╔════════════════════════════════════════╗$(RESET)\n"
	@printf "$(PURPLE)║                                        ║$(RESET)\n"
	@printf "$(PURPLE)║   $(WHITE)EPITECH PROJECT - $(NAME) $(PURPLE) \
		 ║$(RESET)\n"
	@printf "$(PURPLE)║                                        ║$(RESET)\n"
	@printf "$(PURPLE)╚════════════════════════════════════════╝$(RESET)\n\n"

footer:
	@printf "\n$(GREEN)╔════════════════════════════════════════╗$(RESET)\n"
	@printf "$(GREEN)║   $(WHITE)Build completed successfully! $(GREEN) \
	      ║$(RESET)\n"
	@printf "$(GREEN)╚════════════════════════════════════════╝$(RESET)\n\n"
