NAME: megaphone

SRCS: megaphone.cpp

CC: c++

CFLAGS: -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

${NAME}: ${OBJS}
		$(CC) $(CFLAGS) $(OBJS) -o ${NAME}
		
clean:
		@rm -rf $(OBJS)
		
fclean: clean
		@rm -rf $(NAME)
		
re: fclean all

