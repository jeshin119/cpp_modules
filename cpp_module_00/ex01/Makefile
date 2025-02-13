NAME := phonebook
CPP := c++
RM := rm -f
CPPFLAG := -Wall -Wextra -Werror -std=c++98

SRCS := Contact.cpp\
		PhoneBook.cpp\
		main.cpp

HEADERS := Contact.hpp\
			PhoneBook.hpp

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