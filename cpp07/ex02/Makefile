NAME	= array
FILES	= main.cpp
FLAGS	= -Wall -Wextra -Werror
GCCPP	= clang++


$(NAME): $(OBJS)
	$(GCCPP) $(FLAGS) $(FILES) -o $(NAME)

all: $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re