NAME = PmergeMe

CC = c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRC = main.cpp PmergeMe.cpp

obj = ${SRC:%.cpp=%.o}

NAME : ${obj}

all : $(NAME)

$(NAME) : $(obj)
	$(CC) $(CXXFLAGS) $(obj) -o $(NAME)

clean :
	$(RM) $(obj)

fclean : clean
	$(RM) $(NAME)

re : clean all