NAME = ft_array

SRCS =  Array.cpp main.cpp

OBJECTS = main.o Array.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	g++ -Wall -Wextra -Werror -o $(NAME) $(SRCS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re : fclean all
