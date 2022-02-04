# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dclark <dclark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 11:59:29 by dclark            #+#    #+#              #
#    Updated: 2022/02/04 12:13:21 by dclark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= megaphone.cpp

OBJS	= $(SRCS:.c=.o)

HEADER	= ./

NAME	= Mégaphone

CFLAGS	+= -Wall -Werror -Wextra -I $(HEADER) -std=c++98

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
