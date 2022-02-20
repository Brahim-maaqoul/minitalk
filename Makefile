# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 21:09:51 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/02/19 21:32:23 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = client
NAME2 = server

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC1 = client.c
SRC2 = server.c

OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

all : $(NAME1)
bonus : $(NAME2)

$(NAME1) : $(OBJ1)
	$(CC) $(CFLAGS) -o $@ $^
$(NAME2) : $(OBJ2)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm -rf $(OBJ1) $(OBJ2)

fclean : clean
	rm -rf $(NAME1) $(NAME2)

re : fclean all
