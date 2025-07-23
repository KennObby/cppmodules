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

NAME = harlFilter
OBJSDIR = obj
SRCS = main.cpp \
	   Harl.cpp 

OBJS = $(addprefix $(OBJSDIR)/, $(notdir $(SRCS:.cpp=.o)))

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(OBJSDIR)/%.o: %.cpp | $(OBJSDIR)
	@echo "Compiling $< -> $@"
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJSDIR)/%.o: ./%.cpp | $(OBJSDIR)
	@echo "Compiling $< -> $@"
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJSDIR):
	mkdir -p $(OBJSDIR)
$(NAME): $(OBJS)
	@echo "Linking..."
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@echo "Cleaning objects"
	rm -rf $(OBJSDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
