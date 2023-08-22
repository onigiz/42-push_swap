SRCS = main.c init_setup.c utils.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
FT_PRINTF = ft_printf/libftprintf.a
LIBFT = libft/libft.a
CFLAGS = -Werror -Wall -Wextra
CC = gcc

all: $(NAME)

$(NAME): $(OBJS) $(FT_PRINTF) $(LIBFT)
	gcc $(CFLAGS) -o push_swap $(OBJS) $(FT_PRINTF) $(LIBFT)

$(FT_PRINTF):
	@make -C ft_printf

$(LIBFT):
	@make -C libft

clean:
	rm -rf *.o
	@make -C ft_printf clean
	@make -C libft clean

fclean: clean
	rm -rf push_swap
	@make -C ft_printf fclean
	@make -C libft fclean

re: fclean all

norm:
	norminette *.[ch]
	make -C ft_printf norm
	make -C libft norm

.PHONY: all clean fclean re