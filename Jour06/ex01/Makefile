NAME = ft_Serialize

SRCS =  main.cpp

OBJECTS = main.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	g++ -Wall -Wextra -Werror -o $(NAME) $(SRCS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re : fclean all
