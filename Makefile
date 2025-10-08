NAME = libft.a
FLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha.c ft_isalnum.c ft_isprint.c ft_toupper.c
OBJECTS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean all