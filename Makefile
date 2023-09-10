SRCS = main.c \
		sorting_moves/push.c sorting_moves/reverse_rotate.c sorting_moves/rotate.c sorting_moves/swap.c \
		init/init1.c init/init2.c \
		

		
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