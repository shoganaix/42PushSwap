
NAME = push_swap

CC := gcc
CFLAGS := -Wall -Wextra -Werror -Iincludes

RM = rm -rf

SOURCE := src/*.c
LIBFT := libft/*c

all:
	make -C
	$(CC) $(CFLAGS) $(SOURCE) $(LIBFT) -o $(NAME)

clean: clean
		make clean -C 
		rm -rf $(NAME)

fclean: clean
		make clean -C 
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re