# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 15:04:40 by uns-35            #+#    #+#              #
#    Updated: 2024/01/08 15:05:57 by uns-35           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

RM = rm -rf

CC = c++

FLAGS = -Wextra -Werror -Wall -fsanitize=address -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		${CC} $(SRC) $(FLAGS) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all