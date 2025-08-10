NAME = animal

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):
	${CC} ${CFLAGS} ${SRC} -o ${NAME}
	
clean:
	rm -rf

fclean: clean
	rm -f $(NAME)

re: fclean all
