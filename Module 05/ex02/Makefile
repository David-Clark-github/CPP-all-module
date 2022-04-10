# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dclark <dclark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 11:59:29 by dclark            #+#    #+#              #
#    Updated: 2022/04/10 12:50:54 by dclark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp 

HEADER	= ./

NAME	= 28B_ou_28C_?

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
