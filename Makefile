NAME = gnl
OBJG = get_next_line.o
OBJM = main.o

$(NAME):
	@make -C libft/ fclean && make -C libft/
	@clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
	@clang -Wall -Wextra -Werror -I libft/includes -o main.o -c -g  main.c
	@clang -o gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
	

all: $(NAME)

clean:
	@rm -f $(OBJG) $(OBJM)
	@make -C libft/ fclean

fclean: clean
	@rm -f $(NAME)

re: fclean all
