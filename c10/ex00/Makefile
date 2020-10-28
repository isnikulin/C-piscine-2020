# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarcelia <aarcelia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/30 22:25:02 by aarcelia          #+#    #+#              #
#    Updated: 2020/09/01 10:27:28 by aarcelia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_display_file

SRC =	ft_displayfile.c

OBJ =	${SRC:.c=.o}

INC =	 -I ./ft.h

OPTIONS =	-L. -lft

CC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} ${INC} -c $< -o ${<:.c=.o}

all:	${OBJ}
	${CC} ${OBJ} ${CFLAGS} ${OPTIONS} -o ${NAME}

clean:
	rm -f ${OBJ}

fclean:	clean
	rm -f $(NAME)

.PHONY:	all clean fclean
