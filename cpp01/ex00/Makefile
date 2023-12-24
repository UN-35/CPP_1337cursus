# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 16:24:52 by yoelansa          #+#    #+#              #
#    Updated: 2023/12/23 14:34:38 by yoelansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

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