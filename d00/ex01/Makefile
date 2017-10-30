# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbodak <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 19:19:20 by mbodak            #+#    #+#              #
#    Updated: 2017/10/30 19:19:28 by mbodak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++

FLAGS = -Wall -Wextra -Werror

SRC = Contact.class.cpp Phonebook.class.cpp main.cpp

OBJ = $(SRC: .cpp = .o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.c %.h
	$(CC) $(FLAGS) -c $<  -o $@


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
