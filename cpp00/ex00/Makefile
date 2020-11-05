# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: memilio <memilio@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/04 22:00:06 by memilio           #+#    #+#              #
#    Updated: 2020/11/04 22:00:07 by memilio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
FILES	= megaphone.cpp
OBJS	= $(FILES:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror
GCCPP	= clang++

.cpp.o:
	$(GCCPP) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(GCCPP) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re