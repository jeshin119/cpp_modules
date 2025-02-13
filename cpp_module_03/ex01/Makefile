NAME := a.out
CXX := c++
RM := rm -f
CXXFLAG := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp

HEADERS := ClapTrap.hpp\
			ScavTrap.hpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)