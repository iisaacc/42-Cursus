NAME = push_swap.a

LIB = ar rcs

SRC = push_swap.c

LIBFT = ./libft/libft.a

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Werror -Wall -Wextra

MYHEADERS = push_swap.h \
			./libft/libft.h

RM = rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJ) $(MYHEADERS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(LIB) $(NAME) $(OBJ)

$(LIBFT):
	make -C ./libft all

clean: libclean
	$(RM) $(OBJ)

libclean:
	make -C ./libft clean

libfclean:
	make -C ./libft fclean

fclean: libfclean clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re libft