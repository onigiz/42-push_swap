SRCS = main.c  \
		init_rules.c \
		init_setup.c \
		init_setup2.c \
		utils.c \
		utils2.c \
		sorting_rules1.c \
		sorting_rules2.c \
		sorting_rules3.c \
		sorting_rules4.c \
		sort_setup.c \
		sort_setup2.c \
		mini_sorts.c 


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
	make -C ft_printf

$(LIBFT):
	make -C libft

clean:
	make -C ft_printf clean
	make -C libft clean
	rm -rf *.o

fclean: clean
	make -C ft_printf fclean
	make -C libft fclean
	rm -rf push_swap

re: fclean all

norm:
	make -C ft_printf norm
	make -C libft norm
	norminette *.[ch]

.PHONY: all clean fclean re