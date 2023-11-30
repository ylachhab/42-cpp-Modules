# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 11:46:13 by ylachhab          #+#    #+#              #
#    Updated: 2023/10/26 11:55:25 by ylachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = PhoneBook.cpp \
	  Contact.cpp \
	  main.cpp

all : $(NAME)

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp PhoneBook.hpp Contact.hpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all