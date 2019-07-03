# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uamirov <uamirov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 20:18:32 by uamirov           #+#    #+#              #
#    Updated: 2019/02/26 01:53:27 by rtsaturi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = -I libft.h
CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -g
SRC =	ft_atoi.c ft_bzero.c ft_clean_int_arr.c ft_error.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memalloc.c \
	ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
   	ft_memset.c ft_numlen.c ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c \
	ft_putendl.c ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_putstr.c \
	ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
	ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
   	ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
	ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c \
	ft_strsub.c ft_strtrim.c ft_symbolcount.c ft_tolower.c ft_toupper.c \
	ft_wordcount.c ft_wspaces.c ft_abs.c get_next_line.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(HEADER) -c $(SRC)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

clean:
		@/bin/$(RM) $(OBJ)

fclean: clean
		@/bin/$(RM) $(NAME)

re: fclean all
