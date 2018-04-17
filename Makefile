NAME = libft

LIBNAME = libft.a

GCCFLAGS = -Wall -Wextra -Werror

SRCS = 
OBJ = 
all: $(LIBNAME) $(NAME)

$(NAME):
	@gcc $(GCCFLAGS) -o $(NAME) -L . $(LIBNAME)

$(LIBNAME):
	@gcc $(GCCFLAGS) -c $(SRCS)
	@ar rc $(LIBNAME) $(OBJ)
	@ranlib $(LIBNAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(LIBNAME)

re: fclean all
