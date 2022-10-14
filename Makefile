# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 12:47:24 by caliaga-          #+#    #+#              #
#    Updated: 2022/10/14 17:39:59 by caliaga-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### MACROS / VARIABLES ####

# Variables de archivos de código fuente '.c' / Sources.
REPRO = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			   ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			   ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			   ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			   ft_atoi.c ft_calloc.c ft_strdup.c
CUSTOM = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			   ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

# Variables de objetos binarios '.o' que se han complilado 
# a raíz de código fuente '.c' / Objects
OBJ_R = $(REPRO:.c=.o)
OBJ_C = $(CUSTOM:.c=.o)
OBJ_B = $(BONUS:.c=.o)

# -I con esta flag configuramos la ruta de las cabeceras '.h' que necesitará el enlazador.
INCLUDE = -I ./
#LIBS  = libft.h

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

#### REGLAS ####

all: $(NAME)

# Compilación de la librería '.a'
$(NAME): $(OBJ_R) $(OBJ_C)
	@ar rc $(NAME) $(OBJ_R) $(OBJ_C)
	@ranlib $(NAME)
	@echo "library $(NAME) created & indexed"

%.o: %.c $(LIBS)
	@gcc $(CFLAGS) -o $@ -c $< $(INCLUDE)

# Si se ponen dependencias a clean luego da problemas con los tester
clean:
	@rm -fr $(OBJ_R) $(OBJ_C)
	@echo "OBJECTS deleted"

fclean: clean
	@rm -fr $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

bonus: $(NAME) $(OBJ_R) $(OBJ_C) $(OBJ_B)
	@ar rc $(NAME) $(OBJ_R) $(OBJ_C) $(OBJ_B)
	@ranlib $(NAME)
	@echo "library $(NAME) plus bonus created & indexed"

.PHONY: all clean fclean re
#### GENRAL ####
