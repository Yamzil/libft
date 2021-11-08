# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 11:15:30 by yamzil            #+#    #+#              #
#    Updated: 2021/11/08 11:17:05 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

INC = libft.h

SRC = *.c

all :$(NAME) 

OBJ = $(SRC:.c=.o) 

$(NAME) :
	gcc $(CFLAGS) -c $(SRC) -I $(INC)
	ar rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all