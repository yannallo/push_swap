NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I./ -I$(LIBFT_DIR)
LDFLAGS = -L$(LIBFT_DIR)
LDLIBS = -lft

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

HEADER = push_swap.h

SRC = src/main.c src/parse.c src/quicksort.c src/radixsort.c src/sort.c src/swap.c src/swap2.c src/utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $(NAME)

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
