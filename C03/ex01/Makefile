NAME = ClapTrap

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

OBJF = obj

RM = rm -rf

SRC = main.cpp \
	  ClapTrap.cpp \
	  ScavTrap.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJF) :
	mkdir -p $(OBJF)

$(OBJF)/%.o : %.cpp ClapTrap.hpp ScavTrap.hpp | $(OBJF)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : fclean clean all re