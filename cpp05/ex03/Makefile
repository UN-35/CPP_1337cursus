# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 11:07:56 by yoelansa          #+#    #+#              #
#    Updated: 2024/03/22 10:04:21 by yoelansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Intern

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

RM = rm -rf

CC = c++

CPPFLAGS = -Wextra -Werror -Wall -std=c++98

all : $(NAME)
$(NAME) : $(SRC)
		${CC} $(SRC) $(CPPFLAGS) -o $(NAME)

fclean :
		${RM} $(NAME)

re : fclean all