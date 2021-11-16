# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 21:03:25 by hnass-pe          #+#    #+#              #
#    Updated: 2021/09/08 16:36:13 by hnass-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_strlen.c ft_isascii.c \
	ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = ${SRC:.c=.o}

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

.c.o: 
	${CC} ${CCFLAGS} -c $< -o $@

all: ${NAME}

$(NAME): ${OBJ}
	ar rcs ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re
