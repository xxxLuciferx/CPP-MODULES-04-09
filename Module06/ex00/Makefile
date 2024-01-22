NAME = main

CC = c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRC = ScalarConverter.cpp main.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(NAME)

fclean :
	$(RM) $(NAME)

re : clean all