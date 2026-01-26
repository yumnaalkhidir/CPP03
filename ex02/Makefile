CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
NAME		:= fragtrap
FILES		:= ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \
				main.cpp 
OBJ			:= $(FILES:.cpp=.o)
HEADER		:= ClapTrap.hpp \
				ScavTrap.hpp \
				FragTrap.hpp

all: $(NAME)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean