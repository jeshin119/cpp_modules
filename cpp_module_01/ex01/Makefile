NAME := a.out
CPP := c++
RM := rm -f
CXXFLAG := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\
		zombieHorde.cpp

HEADERS := Zombie.hpp\

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CPP) $(CXXFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CXXFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)