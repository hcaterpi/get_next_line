# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcaterpi <hcaterpi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 14:26:54 by hcaterpi          #+#    #+#              #
#    Updated: 2019/09/16 14:57:26 by hcaterpi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all objects clean fclean re

NAME = libft.a

OBJECTS = $(SOURCE:.c=.o)

SOURCE = 	ft_list_add.c \
			ft_list_create.c \
			ft_list_delete.c \
			ft_list_find.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlen.c \
			ft_strnew.c \
			ft_strsub.c

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $^
	ranlib $(NAME)

$(OBJECTS): %.o : %.c libft.h
	gcc -Wall -Wextra -Werror -c $<

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
