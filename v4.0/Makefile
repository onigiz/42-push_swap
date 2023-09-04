SRCS = main.c \
		Initialization/start_stack.c \
		
		
OBJS = $(SRCS:.c=.o)
NAME = push_swap
UTILS = utils/utils.a
CFLAGS = -Werror -Wall -Wextra
CC = gcc

all: $(NAME)

$(NAME): $(OBJS) $(UTILS)
	$(CC) $(CFLAGS) -o push_swap $(OBJS) $(UTILS)

$(UTILS):
	@make -C utils

clean:
	@make -C utils clean
	@rm -rf $(OBJS)

fclean: clean
	@make -C utils fclean
	@rm -rf push_swap

re: fclean all

norm:
	@make -C utils norm
	@norminette *.[ch]

git: 
	@git add .
	@git status
	@git commit -m "not finished"
	@git push

.PHONY: all clean fclean re norm git