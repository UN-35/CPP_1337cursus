# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 10:42:38 by yoelansa          #+#    #+#              #
#    Updated: 2024/02/03 14:36:35 by uns-35           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HordeOfZombies

SRC= main.cpp Zombie.cpp zombieHorde.cpp

RM = rm -rf

CC = c++

CPPFLAGS = -Wextra -Werror -Wall -fsanitize=address -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		${CC} $(SRC) $(CPPFLAGS) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all