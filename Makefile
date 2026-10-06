# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/06 11:55:17 by psaudell          #+#    #+#              #
#    Updated: 2026/10/06 15:49:36 by psaudell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS= -Wall -Wextra -Werror
# ar = cree/modifie une archive (biblio statique .a)
#   r : ajoute les .o dans l'archive (remplace ceux qui existent deja)
#   c : crée l'archive si elle n'existe pas (sans message d'avertissement)
#   s : ecrit un index des symboles pour que le linker trouve les fonctions
AR = ar rcs
RM = rm -f

SRCS = ft_isalpha.c \
		ft_isalnum.c\
		ft_isascii.c\
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 