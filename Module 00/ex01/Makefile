# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dclark <dclark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 11:59:29 by dclark            #+#    #+#              #
#    Updated: 2022/03/23 11:17:36 by dclark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			Contact.class.cpp \
			PhoneBook.class.cpp \
			Utils.class.cpp

HEADER	= ./

NAME	= Repertoir

CFLAGS	+= -Wall -Werror -Wextra -I $(HEADER) -std=c++98 -g

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
