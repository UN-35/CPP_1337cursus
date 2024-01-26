# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 15:04:40 by uns-35            #+#    #+#              #
#    Updated: 2024/01/26 17:04:58 by uns-35           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weaponss

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

RM = rm -rf

CC = c++

CPPFLAGS = -Wextra -Werror -Wall -fsanitize=address -std=c++98

all : $(NAME)
$(NAME) : $(SRC)
		${CC} $(SRC) $(CPPFLAGS) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all