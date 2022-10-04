# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 12:47:24 by caliaga-          #+#    #+#              #
#    Updated: 2022/10/04 17:21:30 by caliaga-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

REPRO = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			   ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			   ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			   ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			   ft_atoi.c ft_calloc.c ft_strdup.c
CUSTOM = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			   ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ_R = $(REPRO:.c=.o)
OBJ_C = $(CUSTOM:.c=.o)
H = libft.h
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
all: $(NAME)
%.o: %.c $(H)
	@gcc $(CFLAGS) -o $@ -c $<
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
