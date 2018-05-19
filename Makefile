# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alyle <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/12 12:17:16 by alyle             #+#    #+#              #
#    Updated: 2018/05/12 17:11:35 by alyle            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

LIBNAME = libft.a

GCCFLAGS = -Wall -Wextra -Werror

SRCS = main.c src/ft_memset.c src/ft_bzero.c src/ft_memcpy.c src/ft_memccpy.c \
	   src/ft_memmove.c src/ft_memchr.c src/ft_memcmp.c src/ft_strlen.c \
	   src/ft_strdup.c src/ft_strcpy.c src/ft_strncpy.c src/ft_strcat.c \
	   src/ft_strlcat.c src/ft_strcmp.c src/ft_strncmp.c src/ft_atoi.c \
	   src/ft_isalpha.c src/ft_isdigit.c src/ft_strncat.c src/ft_strchr.c \
	   src/ft_strrchr.c src/ft_strnstr.c src/ft_isalnum.c src/ft_isascii.c \
	   src/ft_isprint.c

OBJ = main.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
	  ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o \
	  ft_strcat.o ft_strlcat.o ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isalpha.o \
	  ft_isdigit.o ft_strncat.o ft_strchr.o ft_strrchr.o ft_strnstr.o \
	  ft_isalnum.o ft_isascii.o ft_isprint.o


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
