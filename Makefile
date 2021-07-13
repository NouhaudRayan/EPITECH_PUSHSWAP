##
## EPITECH PROJECT, 2020
## makefile
## File description:
## sous fonction
##

SRC =	$(wildcard *.c)			\
		$(wildcard src/*.c)

OBJ		=	$(SRC:.c=.o)

NAME	= push_swap

CFLAGS	=	-I./include/ -g

LDFLAGS	=	-L./lib/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ) lib/libmy.a
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		$(RM) ./lib/my/*~
		$(RM) *~
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
		$(RM) ./lib/libmy.all

re:		fclean all

lib/libmy.a:
		$(MAKE) -C ./lib/my/

.Phony: all clean fclean re