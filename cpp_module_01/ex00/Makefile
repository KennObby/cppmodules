# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/31 17:50:26 by oilyine-          #+#    #+#              #
#    Updated: 2025/05/31 18:03:12 by oilyine-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = Zombie.cpp \
	   main.cpp \
	   newZombie.cpp \
	   randomChump.cpp

OBJS = ${SRCS:.cpp=.o}
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiling... "
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@echo "Cleaning objects "
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
