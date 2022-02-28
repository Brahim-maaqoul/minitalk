# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 21:09:51 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/02/28 01:26:55 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT = client
SERVER = server
CLIENT_BONUS = client_bonus
SERVER_BONUS = server_bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_strlen.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c
SRCB = ft_atoi.c ft_strlen.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)
OBJB = $(SRCB:.c=.o)

%.o : %.c minitalk.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(OBJS)
	$(CC) $(CFLAGS) server.c $(OBJS) -o $(SERVER)
	$(CC) $(CFLAGS) client.c $(OBJS) -o $(CLIENT)

bonus : $(OBJB)
	$(CC) $(CFLAGS) server_bonus.c $(OBJB) -o $(SERVER_BONUS)
	$(CC) $(CFLAGS) client_bonus.c $(OBJB) -o $(CLIENT_BONUS)

	
clean :
	rm -rf $(OBJS) $(OBJB)

fclean : clean
	rm -rf $(CLIENT) $(SERVER) $(CLIENT_BONUS) $(SERVER_BONUS)

re : fclean all
