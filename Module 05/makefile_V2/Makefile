IDIR	=	./include
CC		=	gcc
CFLAGS	=	-I$(IDIR)

ODIR	=	./obj

NAME	=	hellomake

_DEPS	=	hellomake.h
DEPS	=	$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ	=	hellomake.o \
			hellofunc.o
OBJ		=	$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $(ODIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean
