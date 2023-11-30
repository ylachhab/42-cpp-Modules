# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 11:03:52 by ylachhab          #+#    #+#              #
#    Updated: 2023/11/14 17:18:15 by ylachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

RM = rm -f

OBJF = obj

SRC = main.cpp \
	  Fixed.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJF):
	mkdir -p $(OBJF)

$(OBJF)/%.o : %.cpp Fixed.hpp | $(OBJF)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) -rf $(OBJF)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: re fclean clean all