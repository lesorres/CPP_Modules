# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 20:14:09 by kmeeseek          #+#    #+#              #
#    Updated: 2021/09/01 23:34:54 by kmeeseek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondtrap
INPUT = $(wildcard ./*.cpp)
CFLAGS	= -Wall -Wextra -Werror
RM = rm -f
OBJS = $(INPUT:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	clang++ $(OBJS) $(CFLAGS) -o $(NAME)
%.o: %.cpp
	clang++ $(CFLAGS) -c $< -o $(<:.cpp=.o)
clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re