NAME = unnecessary_violence
SRCS =	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS =	$(SRCS:.cpp=.o)
CPP98 =	c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(OBJS)
	$(CPP98) $(OBJS) -o $(NAME)
	
clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
