# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 20:06:49 by msoriano          #+#    #+#              #
#    Updated: 2023/12/12 13:07:37 by msoriano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes -g3

SRCS =  src/main.c       \
        src/radix.c      \
        src/simplesort.c \
        src/others/lists.c    \
        src/others/stack.c    \
        src/others/utils.c    \
        src/others/utilstwo.c \
        src/instructions/swap.c           \
        src/instructions/push.c           \
        src/instructions/reverserotate.c \
        src/instructions/rotate.c 		  \

OBJS = $(SRCS:%.c=%.o)

all: ${NAME}
${NAME}: ${OBJS}
	@${MAKE} -C ./libft
	@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

RM = rm -rf

clean:
	@${MAKE} -C ./libft fclean
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
