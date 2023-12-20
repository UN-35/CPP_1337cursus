# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 17:16:43 by yoelansa          #+#    #+#              #
#    Updated: 2023/12/20 17:28:21 by yoelansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC= megaphone.cpp

RM = rm -rf

CC = c++

FLAGS = -Wextra -Werror -Wall -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		${CC}  $(SRC) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all