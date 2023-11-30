# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 14:30:05 by ylachhab          #+#    #+#              #
#    Updated: 2023/11/04 11:02:27 by ylachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

RM = rm -f

OBJF = obj

SRC = main.cpp \
	  Replace.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJF):
	mkdir -p $(OBJF)

$(OBJF)/%.o : %.cpp Replace.hpp | $(OBJF)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) -rf $(OBJF)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONE: all clean fclean re