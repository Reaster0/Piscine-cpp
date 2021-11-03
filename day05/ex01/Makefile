# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 13:35:59 by earnaud           #+#    #+#              #
#    Updated: 2021/11/03 18:35:20 by earnaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		:= main.cpp \
				Bureaucrat.cpp \
				Form.cpp

OBJS		:= $(SRCS:.cpp=.o)
NAME		:= bureaucrat
CC			:= clang++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98
%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)
		
fclean:		clean
			$(RM) $(NAME)

re:			fclean all