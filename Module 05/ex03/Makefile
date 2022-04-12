# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dclark <dclark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 11:59:29 by dclark            #+#    #+#              #
#    Updated: 2022/04/12 18:59:37 by dclark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR	=	./includes
CC		=	c++
CFLAGS	=	-I$(IDIR)

ODIR	=	./obj
SDIR	=	./src

NAME	=	Stagiaire

_DEPS	=	Form.h \
			ShrubberyCreationForm.h \
			Bureaucrat.h \
			RobotomyRequestForm.h \
			PresidentialPardonForm.h \
			Intern.h

DEPS	=	$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ	=	main.o \
			Form.o \
			ShrubberyCreationForm.o \
			Bureaucrat.o \
			RobotomyRequestForm.o \
			PresidentialPardonForm.o \
			Intern.o

OBJ		=	$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $(ODIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
