NAME = convert

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

OBJF = obj

SRC = main.cpp \
	  ScalarConverter.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJF) :
	mkdir -p $(OBJF)

$(OBJF)/%.o : %.cpp ScalarConverter.hpp | $(OBJF)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean all fclean re