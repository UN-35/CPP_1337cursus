# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 11:07:56 by yoelansa          #+#    #+#              #
#    Updated: 2024/03/08 11:59:23 by yoelansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat...

SRC = main.cpp Bureaucrat.cpp Form.cpp

RM = rm -rf

CC = c++

CPPFLAGS = -Wextra -Werror -Wall -std=c++98 #-fsanitize=address

all : $(NAME)
$(NAME) : $(SRC)
		${CC} $(SRC) $(CPPFLAGS) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all