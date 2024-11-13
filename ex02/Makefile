# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chorst <chorst@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 11:43:42 by chorst            #+#    #+#              #
#    Updated: 2024/10/21 15:54:04 by chorst           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE =	main.cpp
OBJECTS = $(SOURCE:.cpp=.o)
CC = g++
REMOVE = rm -f
CPPFLAGS = -Wall -Wextra -Werror -pedantic

NAME =  HI_THIS_IS_BRAIN

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

# Removed cause 42 got a new standart:
# -std=c++98
