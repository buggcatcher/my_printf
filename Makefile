# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mailinci <mailinci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 15:41:05 by mailinci          #+#    #+#              #
#    Updated: 2024/03/24 21:08:22 by mailinci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
DEPS := ft_printf.h
CFILES :=	ft_printf.c \
			ft_puthexmempf.c \
			ft_putcharpf.c \
			ft_puthexnbrpf.c \
			ft_putnbrpf.c \
			ft_putstrpf.c \
			ft_vcheck.c \
		
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean flean re
	echo mark all non-file targets