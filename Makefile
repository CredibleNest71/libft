CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC =	ft_isalpha.c ft_toupper.c ft_isdigit.c ft_tolower.c ft_isalnum.c ft_isascii.c ft_strchr.c\
	ft_isprint.c ft_strrchr.c ft_strlen.c ft_strnvmp.c ft_memset.c ft_memchr.c ft_bzero.c\
	ft_memcmp.c ft_memcpy.c ft_strnstr.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_atoi.c\
	calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmap.c\
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -c -o $(NAME)
clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all


