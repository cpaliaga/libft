# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 12:47:24 by caliaga-          #+#    #+#              #
#    Updated: 2022/09/30 14:43:05 by caliaga-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Funciones reproducidas de la libreria lib c 
F_P1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			   ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			   ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			   ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			   ft_atoi.c ft_calloc.c ft_strdup.c

F_P2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			   ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SOURCE = libft.h $(F_P1) $(F_P2)
OBJECTS = ${SOURCE: c==.o}
AR = ar sc
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

.c.o:		${CC} ${CFLAGS} -c $< -o{<: .c=.o}
$(NAME): 	$(OBJECTS)

all: $(NAME)
clean:	rm -fr $(OBJECTS)
fclean:	clean
		rm -fr $(NAME)
re:	fclean all
.PPHONY: all cclea:wq
	n fclean re
