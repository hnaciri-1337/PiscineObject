# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 12:35:25 by hnaciri-          #+#    #+#              #
#    Updated: 2024/01/17 16:13:37 by hnaciri-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = *.cpp
OBJS = *.o
INCLUDE = *.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = LiskovSubstitution

all: ${NAME}

${NAME}: ${SRCS} ${INCLUDE}
	${CC} ${CFLAGS} -c ${SRCS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
run: all clean
	clear && ./${NAME}
re : fclean all
