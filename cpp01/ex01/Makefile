# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 10:42:38 by yoelansa          #+#    #+#              #
#    Updated: 2023/12/26 10:44:01 by yoelansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HordeOfZombies

SRC= *.cpp

RM = rm -rf

CC = c++

FLAGS = -Wextra -Werror -Wall -fsanitize=address -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		${CC} $(SRC) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all