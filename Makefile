# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alyle <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/12 12:17:16 by alyle             #+#    #+#              #
#    Updated: 2018/05/12 15:09:47 by alyle            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

LIBNAME = libft.a

GCCFLAGS = -Wall -Wextra -Werror

SRCS = main.c src/ft_memset.c src/ft_bzero.c src/ft_memcpy.c src/ft_memccpy.c \
	   src/ft_memmove.c src/ft_memchr.c

OBJ = main.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
	  ft_memchr.o

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
