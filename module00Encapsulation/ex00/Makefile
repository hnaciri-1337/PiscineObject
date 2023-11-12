SRCS = *.cpp
OBJS = *.o
INCLUDE = *.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = DivideAndConquer

all: ${NAME}

${NAME}: ${SRCS} ${INCLUDE}
	${CC} ${CFLAGS} -c ${SRCS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
run: all clean
	clear && ./DivideAndConquer
re : fclean all
