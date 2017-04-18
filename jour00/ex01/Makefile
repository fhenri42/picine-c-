EXEC = phonebook

SRCC = main.cpp User.class.cpp

OFILE = $(SRCC:%.cpp=%.o)

FLAG = -Wall -Werror -Wextra

.PHONY: all fast clean fclean

all: main

%.o: %.c
	@echo -n  $< :
	@clang++ -o $@ -c $< $(FLAG)
	@echo

main: $(OFILE)
	@clang++ -o $(EXEC) $(FLAG) $(OFILE)

fast: $(OFILE)
	@clang++ $(FLAG) -o $(EXEC) $(OFILE)

clean:
	@rm -f $(OFILE)

fclean: clean
	@rm -f $(OFILE) $(EXEC)

re: fclean all
