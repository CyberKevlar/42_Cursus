NAME =	no_you_need_form_28B_not_28C...
SRCS =	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS =	$(SRCS:.cpp=.o)
CPP98 =	g++ -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP98) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP98) -c $< -o $@

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)
	rm -f House_shrubbery

re: fclean $(NAME)

.PHONY: all clean fclean re