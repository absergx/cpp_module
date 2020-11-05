NAME	= myawesomephonebook
FILES	= PhoneBook.cpp
OBJS	= $(FILES:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror
GCCPP	= clang++
INC		= ./includes
INCS	= -I$(INC)

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