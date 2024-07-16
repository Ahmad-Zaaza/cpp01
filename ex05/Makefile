NAME = harl

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = Harl.hpp

SRCS = main.cpp Harl.cpp


all: $(NAME)

OBJS = $(SRCS:.cpp=.o)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re