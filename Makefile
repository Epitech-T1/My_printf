##
## EPITECH PROJECT, 2020
## delivery
## File description:
## Makefile
##

SRC =	my_printf_flagss.c \
		my_printf_base.c \
		my_printf_otherf.c \
		my_printf.c \
		my_put.c \
		unsigned.c

OBJ = 	$(SRC:.c=.o)

CFLAGS	=	-I./include \

NAME = 	libmy.a

all: 	$(NAME)

$(NAME): 	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re