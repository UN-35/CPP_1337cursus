# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 15:36:12 by yoelansa          #+#    #+#              #
#    Updated: 2024/02/17 16:24:58 by yoelansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

RM = rm -rf

CC = c++

CPPFLAGS = -Wextra -Werror -Wall -std=c++98

all : $(NAME)
$(NAME) : $(SRC)
		${CC} $(SRC) $(CPPFLAGS) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all