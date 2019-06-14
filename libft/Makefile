# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maparmar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/15 20:49:48 by maparmar          #+#    #+#              #
#    Updated: 2019/06/13 20:35:31 by emdiaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I $(INCLUDES)
INCLUDES = libft.h
FILES = ft*.c

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)
	echo "Libft: clean: objects cleaned."

fclean: clean
	rm -f $(NAME)
	echo "Libft: fclean: library deleted."

re: fclean all

.PHONY: clean fclean all re
