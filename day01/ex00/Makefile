# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 13:35:59 by earnaud           #+#    #+#              #
#    Updated: 2021/10/04 13:11:10 by earnaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		:= main.cpp \
				randomChump.cpp \
				newZombie.cpp \
				Zombie.cpp

OBJS		:= $(SRCS:.cpp=.o)
NAME		:= Zombz
CC			:= clang++
CFLAGS		:= -Wall -Wextra -Werror
%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)
		
fclean:		clean
			$(RM) $(NAME)

build:
			sudo docker build -t debug-cpp ../../.

debug:		build
			sudo docker run -itv /$(shell pwd):/work debug-cpp

re:			fclean all