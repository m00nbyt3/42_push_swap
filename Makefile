# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycarro <ycarro@student.42.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 10:43:16 by ycarro            #+#    #+#              #
#    Updated: 2021/12/10 12:31:45 by ycarro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME := push_swap

CC = gcc

HDIR = include/
INCLUDE =  -I $(HDIR)
HEADERFILES := include/push_swap.h

SRCFILES := alg35.c \
			algdef.c \
			args.c \
			compl.c \
			errors.c \
			main.c \
			near.c \
			opdouble.c \
			operations.c

OBJFILES := $(SRCFILES:%.c=obj/%.o)

CFLAGS = -Wall -Wextra -Werror $(INCLUDE)

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CC) $(OBJFILES) -o $@

obj/%.o: src/%.c $(HEADERFILES)
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) -o $@ -c $<

clean:
		rm -f $(OBJFILES)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
