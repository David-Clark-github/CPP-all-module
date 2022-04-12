# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dclark <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 16:52:45 by dclark            #+#    #+#              #
#    Updated: 2022/04/12 17:17:51 by dclark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR	=	./include
CC		=	gcc
CFLAGS	=	-I$(IDIR)

ODIR	=	./obj
SDIR	=	./src

NAME	=	hellomake

_DEPS	=	hellomake.h
DEPS	=	$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ	=	hellomake.o \
			hellofunc.o
OBJ		=	$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $(ODIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
