# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/29 03:14:24 by yoelansa          #+#    #+#              #
#    Updated: 2024/03/29 03:18:39 by yoelansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

RM = rm -rf

all : $(NAME)

$(NAME) :
		c++ main.cpp -Wextra -Werror -Wall -std=c++98 -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all