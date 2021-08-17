# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 20:21:08 by kmeeseek          #+#    #+#              #
#    Updated: 2021/08/15 17:41:30 by kmeeseek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHord
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