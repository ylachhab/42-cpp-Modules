NAME = btc

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

RM = rm -f

OBJF = obj

SRC = main.cpp \
	  BitcoinExchange.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJF):
	mkdir -p $(OBJF)

$(OBJF)/%.o : %.cpp BitcoinExchange.hpp | $(OBJF)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) -rf $(OBJF)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean all fclean re