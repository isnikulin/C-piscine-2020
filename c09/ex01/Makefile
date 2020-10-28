# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarcelia <aarcelia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/30 22:25:02 by aarcelia          #+#    #+#              #
#    Updated: 2020/08/30 22:53:42 by aarcelia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS	= ./srcs/ft_putchar.c	./srcs/ft_putstr.c	./srcs/ft_strcmp.c\
			./srcs/ft_strlen.c	./srcs/ft_swap.c

INCFTH = -I ./includes/

OBJS	=	${SRCS:.c=.o}

CC	= gcc

CFLAGS	=	-Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} ${INCFTH} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
					ar rc ${NAME} ${OBJS}

all:	${NAME}

clean:
			/bin/rm -f $(OBJS)

fclean:	clean
			/bin/rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
