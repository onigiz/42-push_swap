#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "limits.h"
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack{
	int	*stacka;
	int	*stackb;
	int	topa;
	int	topb;
}	t_stack;

void	initial_split(t_stack **stacks, int len);
void    error_handle(t_stack *stacks);
void    all_free(t_stack *stacks);
int		split_len(char **split);
long	ft_atol_st(const char *str, t_stack *stacks);
void	result_checker(long result, t_stack *stacks);
t_stack	*split_and_check(char **av);

#endif