# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 10:42:38 by yoelansa          #+#    #+#              #
#    Updated: 2024/01/08 13:37:30 by uns-35           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HordeOfZombies

SRC= main.cpp Zombie.cpp zombieHorde.cpp

RM = rm -rf

CC = c++

FLAGS = -Wextra -Werror -Wall -fsanitize=address -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		${CC} $(SRC) $(FLAGS) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all