NAME = Form

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJF = obj

RM = rm -rf

SRC =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

all : $(NAME)

$(OBJF) :
	mkdir -p $(OBJF)

$(OBJF)/%.o : %.cpp Bureaucrat.hpp Form.hpp | $(OBJF)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all re clean