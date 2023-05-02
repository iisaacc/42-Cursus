NAME = libftprintf.a

LIB = ar rcs

SRC = ft_aux.c ft_printf.c ft_putvar.c ft_putnbr_base_pf.c ft_aux2.c ft_testing.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Werror -Wall -Wextra

RM = rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re libft
