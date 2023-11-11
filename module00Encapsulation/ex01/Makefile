SRCS = main.cpp span.cpp
OBJS = main.o span.o
INCLUDE = span.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex01

all: ${NAME}

${NAME}: ${SRCS} ${INCLUDE}
	${CC} ${CFLAGS} -c ${SRCS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
re : fclean all
	