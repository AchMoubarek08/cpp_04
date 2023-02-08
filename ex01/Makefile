
CC = c++ -Wall -Wextra -Werror -std=c++98 -g -o Polymorph 
SRC =  polymorph.cpp main.cpp WrongAnimal.cpp brain.cpp

NAME = Polymorph

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean	
	rm -f $(NAME) 

re : fclean all
		@rm -r *.dSYM