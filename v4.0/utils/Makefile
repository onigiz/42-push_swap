# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 03:39:10 by onigiz            #+#    #+#              #
#    Updated: 2023/09/04 16:50:49 by onigiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

list = 
		

OBJS = $(list:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = utils.a

all: ${NAME}

$(NAME): ${OBJS}
	@ar rc ${NAME} ${OBJS}

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean ${NAME}

norm:
	norminette *.[ch]
	
.PHONY: clean fclean all re