# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: memilio <memilio@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 17:33:39 by memilio           #+#    #+#              #
#    Updated: 2020/11/09 18:34:33 by memilio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace
SRC		= main.cpp Replace.cpp
GCCPP	= clang++
FLAGS	= -Wall -Wextra -Werror
INC		= ./includes
INCS	= -I$(INC)
OBJS	= $(SRC:.cpp=.o)

.cpp.o:
	$(GCCPP) $(FLAGS) $(INCS) -o $@ -c $<

$(NAME): $(OBJS)
	$(GCCPP) $(OBJS) $(INCS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re