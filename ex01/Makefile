# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emencova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/29 14:33:29 by emencova          #+#    #+#              #
#    Updated: 2024/06/29 14:33:34 by emencova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: phonebook

SRCS: phonebook.cpp

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
