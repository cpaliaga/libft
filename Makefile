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

<<<<<<< HEAD
=======
# Funciones de la libreria 
>>>>>>> refs/remotes/origin/master
REPRO = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			   ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			   ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			   ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			   ft_atoi.c ft_calloc.c ft_strdup.c

CUSTOM = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			   ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
<<<<<<< HEAD

OBJ_R = $(REPRO:.c=.o)

OBJ_C = $(CUSTOM:.c=.o)

H = libft.h

=======
H = libft.h

OBJ_R = ${REPRO: .c==.o}

OBJ_c = ${CUSTOM: .c==.o}

>>>>>>> refs/remotes/origin/master
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

<<<<<<< HEAD
###

all: $(NAME)

# Compile last modifications
%.o: %.c $(H)
	@gcc $(CFLAGS) -o $@ -c $<

# Compile as library
$(NAME): $(OBJ_R) $(OBJ_C)
	@ar rc $(NAME) $(OBJ_R) $(OBJ_C)
	@ranlib $(NAME)
	@echo "library $(NAME) created & indexed"

clean: $(OBJ_R) $(OBJ_C)
	@rm -fr $(OBJ_R) $(OBJ_C)
	@echo "OBJECTS deleted"

fclean: clean
	@rm -fr $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all clean fclean re
=======
all: $(NAME)

%.o:%.c
	${CC} ${CFLAGS} -o $@ -c $<

$(NAME):	$(OBJ_R) $(OBJ_C) 
	@ar rc $(NAME) $(OBJ_R) $(OBJ_C)
	@libran $(NAME)

clean:	rm -fr $(OBJ_R) $(OBJ_C) 

fclean:	clean
		rm -fr $(NAME)

re:	fclean, all

.PHONY: all, clean, fclean, re
>>>>>>> refs/remotes/origin/master
