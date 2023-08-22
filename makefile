SRCS = main.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
PRINTF = ft_printf/libftprintf.a
CFLAGS = -Werror -Wall -Wextra
CC = gcc

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF)
	gcc $(CFLAGS) -o push_swap $(OBJS) $(PRINTF)

$(PRINTF):
	@make -C ft_printf

clean:
	rm -rf *.o
	@make -C ft_printf clean

fclean: clean
	rm -rf push_swap
	@make -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re