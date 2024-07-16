NAME = zombie

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = Zombie.hpp

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)
 
OBJS = $(SRCS:.cpp=.o)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)


re: fclean all

.PHONY: all clean fclean re
