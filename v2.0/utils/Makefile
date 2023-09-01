list=sub_funcs.c \
		fstrjoin.c \
		fsplit.c

OBJS = $(list:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = sub_utils.a

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