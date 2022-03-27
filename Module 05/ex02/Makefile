# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dclark <dclark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 11:59:29 by dclark            #+#    #+#              #
#    Updated: 2022/03/07 12:54:14 by dclark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp

HEADER	= ./

NAME	= Bureaucrate_et_des_larves

CFLAGS	+= -Wall -Werror -Wextra -I $(HEADER) -std=c++98 # -g -fsanitize=address

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