# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dclark <dclark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 11:59:29 by dclark            #+#    #+#              #
#    Updated: 2022/03/02 17:47:31 by dclark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	Animal.cpp \
			WrongAnimal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongCat.cpp \
			main.cpp


HEADER	= ./

NAME	= Polymorphisme

CFLAGS	+= -Wall -Werror -Wextra -I $(HEADER) -std=c++98

OBJS	= $(SRCS:.cpp=.o)

CC		=	c++

all:	$(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean
	make

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.PHONY:	all clean fclean re