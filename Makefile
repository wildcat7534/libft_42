NAME = libft.a

HEADERS = libft.h

SOURCES = $(wildcard ft_*.c)

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Werror -Wall -Wextra -I.

CC = cc

AR = ar rcs

RM = rm -f

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(AR) $@ $^

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re
