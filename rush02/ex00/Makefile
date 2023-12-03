CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src
OBJ_DIR = obj
INCLUDES = -I.
HEADERS = ft.h

SRCS = main.c cavolo.c process_file_1.c process_file_2.c ft_getnb.c ft_util.c
OBJS = $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRCS))

NAME = rush-02

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

clean_all: fclean
	make

.PHONY: all clean fclean re clean_all
