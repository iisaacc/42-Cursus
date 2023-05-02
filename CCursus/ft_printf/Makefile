NAME = libftprintf.a
LIB	= libft.a

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIB)
	@gcc -Wall -Wextra -Werror -c *.c
	@ar -q $(NAME) *.o 

$(LIB):
	@gcc -c -Wall -Werror -Wextra C:\Users\Usuario\Desktop\DAW\Proyectos\libftpro\*.c -I C:\Users\Usuario\Desktop\DAW\Proyectos\libftpro\libft.h
	@ar -q C:\Users\Usuario\Desktop\DAW\Proyectos\libftpro\$(LIB) *.o

clean:
	@rm -rf *.o C:\Users\Usuario\Desktop\DAW\Proyectos\libftpro\*.o

fclean: clean
	@rm -rf $(NAME)
	@rm -rf C:\Users\Usuario\Desktop\DAW\Proyectos\libftpro\$(LIB)

re: fclean $(LIB) all