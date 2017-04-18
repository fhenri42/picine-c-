EXEC = ft_retro

SRCC = Ammo.class.cpp  AmmoController.class.cpp  EnnemyController.cpp  GameController.cpp  GameEntity.cpp   Iennemy.class.cpp   Image.cpp   Player.class.cpp  Transforme.cpp Vector2.cpp  main.cpp\

OFILE = $(SRCC:%.cpp=%.o)

FLAG = -Wall -Werror -Wextra -lncurses

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
