# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/30 18:23:32 by yoelansa          #+#    #+#              #
#    Updated: 2024/03/30 18:23:51 by yoelansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

SRC = main.cpp

RM = rm -rf

CC = c++

CPPFLAGS = -Wextra -Werror -Wall -std=c++98

all : $(NAME)
$(NAME) : $(SRC)
		${CC} $(SRC) $(CPPFLAGS) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all