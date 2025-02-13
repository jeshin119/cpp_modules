NAME := Account
CPP := c++
RM := rm -f
CPPFLAG := -Wall -Wextra -Werror -std=c++98

SRCS := Account.cpp\
		tests.cpp

HEADERS := Account.hpp\

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CPP) $(CPPFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CPPFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)