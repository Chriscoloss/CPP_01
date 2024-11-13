# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chorst <chorst@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 10:39:22 by chorst            #+#    #+#              #
#    Updated: 2024/10/21 15:53:53 by chorst           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE =	main.cpp
OBJECTS = $(SOURCE:.cpp=.o)
CC = g++
REMOVE = rm -f
CPPFLAGS = -Wall -Wextra -Werror -pedantic

NAME =  Sed_is_for_losers

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
