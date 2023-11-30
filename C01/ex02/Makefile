# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 15:41:45 by ylachhab          #+#    #+#              #
#    Updated: 2023/11/04 11:02:41 by ylachhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

RM = rm -f

OBJF = obj

SRC = main.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJF):
	mkdir -p $(OBJF)

$(OBJF)/%.o : %.cpp | $(OBJF)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) -rf $(OBJF)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONE: all clean fclean re