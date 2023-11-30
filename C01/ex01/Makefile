# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 12:14:42 by ylachhab          #+#    #+#              #
#    Updated: 2023/11/08 18:00:45 by ylachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

RM = rm -f

OBJF = obj

SRC = main.cpp \
	  Zombie.cpp \
	  zombieHorde.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJF):
	mkdir -p $(OBJF)

$(OBJF)/%.o : %.cpp Zombie.hpp | $(OBJF)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) -rf $(OBJF)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONE: all clean fclean re