# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chorst <chorst@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 14:35:30 by chorst            #+#    #+#              #
#    Updated: 2024/10/21 15:53:38 by chorst           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE =	main.cpp \
			Zombie.cpp \
			zombieHorde.cpp
OBJECTS = $(SOURCE:.cpp=.o)
CC = g++
REMOVE = rm -f
CPPFLAGS = -Wall -Wextra -Werror -pedantic

NAME = Moar_brainz

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
