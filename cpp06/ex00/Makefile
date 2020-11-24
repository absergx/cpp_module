NAME	= convert
FILES	= main.cpp
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