# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eanella <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/24 18:43:59 by eanella           #+#    #+#              #
#    Updated: 2025/01/24 18:44:03 by eanella          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Werror -Wextra 

SOURCES = ft_printf.c print_type.c print_char.c print_str.c print_ptr.c \
	print_num.c print_uns_num.c print_hex.c uns_itoa.c hex_itoa.c \
	libft/ft_putstr_fd.c libft/ft_strlen.c libft/ft_itoa.c libft/ft_toupper.c \
	libft/ft_strdup.c libft/ft_putchar_fd.c libft/ft_calloc.c libft/ft_bzero.c \
	libft/ft_memset.c

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all
