NAME := megaphone
CPP := c++
RM := rm -f
CPPFLAG := -Wall -Wextra -Werror -std=c++98

SRCS := megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CPP) $(CPPFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)
