# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/04 16:47:18 by kmeeseek          #+#    #+#              #
#    Updated: 2021/09/20 18:51:25 by kmeeseek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify
INPUT = $(wildcard ./*.cpp)
HEAD = *.hpp
CFLAGS = -Wall -Wextra -Werror
FLAGS = -std=c++98
RM = rm -f
OBJS = $(INPUT:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS) $(HEAD)
	clang++ $(OBJS) $(CFLAGS) $(FLAGS) -o $(NAME)
%.o: %.cpp
	clang++ $(CFLAGS) -c $< -o $(<:.cpp=.o)
clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME) Home_shrubbery
re: fclean all
.PHONY: all clean fclean re