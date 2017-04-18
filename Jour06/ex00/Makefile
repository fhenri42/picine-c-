NAME = ft_ScalarConversion

SRCS =  main.cpp Conversion.class.cpp

OBJECTS = main.o Conversion.class.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	g++ -Wall -Wextra -Werror -o $(NAME) $(SRCS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re : fclean all
