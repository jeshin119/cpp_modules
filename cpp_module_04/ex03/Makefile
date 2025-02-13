NAME := a.out
CXX := c++
RM := rm -f
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
DBG = -g -fsanitize=address
SRCS := main.cpp\
		AMateria.cpp\
		Cure.cpp\
		Ice.cpp\
		ICharacter.cpp\
		Character.cpp\
		IMateriaSource.cpp\
		MateriaSource.cpp

HEADERS := AMateria.hpp\
			Cure.hpp\
			Ice.hpp\
			ICharacter.hpp\
			Character.hpp\
			IMateriaSource.hpp\
			MateriaSource.hpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

d : $(SRCS) $(HEADERS)
	$(CXX) $(DBG) $(SRCS) 

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re