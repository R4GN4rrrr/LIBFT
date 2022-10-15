NAME = libft

SOURCES = ft_strlcat.c ft_memset.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_strlen.c   ft_memchr.c ft_memcmp.c ft_memmove.c ft_strdup.c \
ft_isdigit.c ft_memcpy.c ft_strncmp.c ft_strlcpy.c ft_atoi.c ft_strnstr.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_isprint.c  ft_calloc.c \

OBJECTS = $(SOURCES:.c=.o)

CC = cc

$(NAME): $(OBJECTS)
		cc -o $(NAME) $(OBJECTS)
		ar ruv libft.a $(OBJECTS)

all: $(NAME)

CFLAGS = -Werror -Wextra -Wall

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm $(NAME)

re: fclean all

