# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dclark <dclark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 11:59:29 by dclark            #+#    #+#              #
#    Updated: 2022/05/03 10:55:33 by dclark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR	=	./includes
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I$(IDIR)

ODIR	=	./.obj
SDIR	=	./src

NAME	=	Serena,_mon_amour!

_DEPS	=	ClapTrap.h \
			ScavTrap.h

DEPS	=	$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ	=	main.o \
			ClapTrap.o \
			ScavTrap.o

OBJ		=	$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $(ODIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
