# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 19:01:00 by yoelansa          #+#    #+#              #
#    Updated: 2024/02/20 20:09:21 by yoelansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

RM = rm -rf

CC = c++

CPPFLAGS = -Wextra -Werror -Wall -std=c++98

all : $(NAME)
$(NAME) : $(SRC)
		${CC} $(SRC) $(CPPFLAGS) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all