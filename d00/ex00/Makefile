
NAME = megaphone

CC = g++

FLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

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