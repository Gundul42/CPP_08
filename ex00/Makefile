# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 08:54:10 by graja             #+#    #+#              #
#    Updated: 2022/03/09 10:24:29 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex00

SRCS	=	main.cpp

CC	=	c++

FLAGS	=	-Wextra -Werror -Wall -Wconversion -std=c++98 

OBJ	=	${SRCS:.cpp=.o}

all	:	$(NAME)

$(NAME)	:	$(OBJ) $(SRC)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re	:	fclean all

.PHONY: all clean fclean re
