# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 17:37:20 by ylachhab          #+#    #+#              #
#    Updated: 2023/10/26 11:58:45 by ylachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = Account.cpp \
	  tests.cpp

all : $(NAME)

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp Account.hpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all