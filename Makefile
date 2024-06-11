NAME = libft.a

HEADERS = libft.h

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJECTS = $(SOURCES:.c=.o)

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

BONUS_OBJECTS = $(BONUS:.c=.o)

CFLAGS = -Werror -Wall -Wextra

CC = cc

AR = ar rcs

RM = rm -f

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(AR) $@ $^

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	$(AR) $(NAME) $^

clean:
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re
