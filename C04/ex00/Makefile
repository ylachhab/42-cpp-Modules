NAME = Animal

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

OBJF = obj

RM = rm -rf

SRC = main.cpp \
	  Dog.cpp \
	  Cat.cpp \
	  Animal.cpp \
	  WrongAnimal.cpp \
	  WrongCat.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJF) :
	mkdir -p $(OBJF)

$(OBJF)/%.o : %.cpp Dog.hpp Cat.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp | $(OBJF)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: fclean clean all re