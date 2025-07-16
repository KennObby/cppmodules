NAME = phonebook

SRCS = 	Phonebook.cpp 	\
	    Contacts.cpp 	\
		main.cpp 

OBJS = ${SRCS:.cpp=.o}
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiling..."
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@echo "cleaning objects"
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
