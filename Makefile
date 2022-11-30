# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 12:47:24 by caliaga-          #+#    #+#              #
#    Updated: 2022/11/30 12:12:01 by caliaga-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### MACROS / VARIABLES ####

# Variables de archivos de código fuente '.c' / Sources.
SRC_DIR = ./
SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))

BONUS_DIR = ./
BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c
BONUS = $(addprefix $(BONUS_DIR), $(BONUS_FILES))

INC_DIR = ./
INC_FILES = libft.h
LIB = $(addprefix $(INC_DIR), $(INC_FILES))

OBJ = $(SRC:.c=.o)
OBJ_B = $(BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
HIDE = .

#### REGLAS ####
all: $(NAME)

bonus: $(HIDE)
	
$(HIDE): $(OBJ) $(OBJ_B)
	ar crs $(NAME) $(OBJ) $(OBJ_B)
	ranlib $(NAME)
	echo "library $(NAME) plus bonus created & indexed"

$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)
	ranlib $(NAME)
	echo "library $(NAME) created & indexed"

$(filter-out %.o, $(SRC)): $(filter-out %.c, $(SRC))
	gcc $(CFLAGS) -I$(INC_DIR) -c $^ -o $@

$(filter-out %.o, $(BONUS)): $(filter-out %.c, $(BONUS))
	gcc $(CFLAGS) -I$(INC_DIR) -c $^ -o $@

clean:
	rm -fr $(SRC:.c=.o) $(BONUS:.c=.o)
	echo "OBJECTS deleted"

fclean: clean
	@rm -fr $(NAME)
	@echo "$(NAME) deleted"

re: fclean all bonus

.PHONY: bonus all clean fclean re
