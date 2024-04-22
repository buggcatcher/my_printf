NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
DEPS := ft_printf.h
CFILES :=	ft_printf.c \
			ft_putfx.c	\
		
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
