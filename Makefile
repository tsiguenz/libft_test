# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 19:56:21 by tsiguenz          #+#    #+#              #
#    Updated: 2021/11/17 23:25:32 by debian           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = ../libft/libft.a
SRC = ${wildcard *.c}
NAME = exec_test_libft

comp:
	${CC} ${CFLAGS} -o ${NAME} ${SRC} ${LIB} -lbsd
	./${NAME}

clean:
	rm -f ${NAME}

re:	clean comp

.PHONY:	comp clean re
