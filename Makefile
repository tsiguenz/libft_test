# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 19:56:21 by tsiguenz          #+#    #+#              #
#    Updated: 2021/11/24 00:00:33 by tsiguenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = ../libft/libft.a
SRC = ${wildcard *.c}
NAME = exec_test_libft
UNAME := $(shell uname)

comp:
    ifeq ($(UNAME), Linux)
	${CC} ${CFLAGS} -o ${NAME} ${SRC} ${LIB} -lbsd
    else
		${CC} ${CFLAGS} -o ${NAME} ${SRC} ${LIB}
    endif
	./${NAME}

clean:
	rm -f ${NAME}

re:	clean comp

.PHONY:	comp clean re
