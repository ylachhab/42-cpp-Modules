NAME = Materia

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

OBJF = obj

RM = rm -rf

SRC = AMateria.cpp \
	  Character.cpp \
	  Cure.cpp \
	  Ice.cpp \
	  MateriaSource.cpp \
	  main.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJF) :
	mkdir -p $(OBJF)

$(OBJF)/%.o : %.cpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp | $(OBJF)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: fclean clean all re