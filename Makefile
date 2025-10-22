NAME = libft.a
FLAGS = -Wall -Wextra -Werror
FILES = $(filter-out ft_lst%_bonus.c, $(wildcard ft_*.c))
BONUS = $(wildcard ft_lst*_bonus.c)
OBJECTS = $(FILES:.c=.o)
BONUS_OBJECTS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

bonus : $(OBJECTS) $(BONUS_OBJECTS)
	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJECTS)
	touch bonus

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -rf bonus

fclean: clean
	rm -rf *.a
	rm -rf a.out

re: fclean all

.PHONY: all bonus clean fclean re