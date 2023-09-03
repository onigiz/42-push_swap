SRCS = 
		
OBJS = $(SRCS:.c=.o)
NAME = push_swap
PRELIBRARY = PreLibrary/PreLibrary.a
CFLAGS = -Werror -Wall -Wextra
CC = gcc

all: $(NAME)

$(NAME): $(OBJS) $(SUB_UTILS)
	$(CC) $(CFLAGS) -o push_swap $(OBJS) $(PRELIBRARY)

$(PRELIBRARY):
	@make -C PreLibrary

clean:
	@make -C PreLibrary clean
	@rm -rf $(OBJS)

fclean: clean
	@make -C PreLibrary fclean
	@rm -rf push_swap

re: fclean all

norm:
	@make -C PreLibrary norm
	@norminette *.[ch]

git: 
	@git add .
	@git status
	@git commit -m "not finished"
	@git push

.PHONY: all clean fclean re norm git