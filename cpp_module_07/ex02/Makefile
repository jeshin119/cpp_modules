NAME := a.out
CXX := c++
RM := rm -f
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
DBG = -g -fsanitize=address
SRCS := main.cpp
HEADERS := Array.hpp
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
