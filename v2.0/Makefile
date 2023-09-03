SRCS = main.c  \
		sorting_moves/push.c \
		sorting_moves/swap.c \
		sorting_moves/rotate.c \
		sorting_moves/reverse_rotate.c \
		program_initialization/init_utils1.c \
		program_initialization/init_utils2.c \
		program_initialization/init_utils3.c \
		
OBJS = $(SRCS:.c=.o)
NAME = push_swap
SUB_UTILS = sub_utils/sub_utils.a
CFLAGS = -Werror -Wall -Wextra
CC = gcc

all: $(NAME)

$(NAME): $(OBJS) $(SUB_UTILS)
	$(CC) $(CFLAGS) -o push_swap $(OBJS) $(SUB_UTILS)

$(SUB_UTILS):
	@make -C sub_utils

clean:
	@make -C sub_utils clean
	@rm -rf $(OBJS)

fclean: clean
	@make -C sub_utils fclean
	@rm -rf push_swap

re: fclean all

norm:
	@make -C sub_utils norm
	@norminette *.[ch]

git: 
	@git add .
	@git status
	@git commit -m "not finished"
	@git push

.PHONY: all clean fclean re norm git