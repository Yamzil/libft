# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 20:51:16 by yamzil            #+#    #+#              #
#    Updated: 2021/11/04 20:51:19 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
OBJECT = *.o

SRC = 	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
	 	ft_memcpy.c \
	 	ft_memmove.c \
	 	ft_memset.c \
	 	ft_strchr.c \
	 	ft_strlcpy.c \
		ft_strlcat.c \
	 	ft_strlen.c \
		ft_strdup.c \
		ft_strncmp.c \
		ft_strrchr.c  \
		ft_tolower.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_calloc.c \

OBJ = $(SRC:%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = /bin/rm -f
RMDIR = /bin/rmdir

$(DIROBJ):
	mkdir $@

$(DIROBJ)/%.o: $(DIRSRC)/%.c | $(DIROBJ)
     @echo Compiling: $<
	$(COMPILE) $(LIBS_INCLUDES) -c $< -o $@
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

.PHONY : all clean fclean re

ALL : $(NAME)
	gcc -o $(NAME) $(SRC)
$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $(NAME)
clean :
	$(RM) $(wildcard $(OBJ))
fclean : clean
	$(RM) $(NAME)

re : fclean all