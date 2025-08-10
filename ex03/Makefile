NAME = interface

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

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
