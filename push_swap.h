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
void	args_init_stacks(t_stack **stacks, int ac);
t_stack	*args_and_check(int ac, char **av);
char	**connect_args(int ac, char **av);
void	check_duplicates(t_stack *stacks);
t_stack	*check_and_initialize(int ac, char **av);
void	start_sorting(t_stack *stacks);
void	sa(int *stacka, int top);
void    sb(int *stackb, int top);
void    ss(t_stack *stacks);
void    pb(t_stack *stacks);
void    pa(t_stack *stacks);
void    ra(int *stacka, int top);
void    rb(int *stackb, int top);
void    rr(t_stack *stacks);
void    rra(int *stacka, int top);
void    rrb(int *stackb, int top);
void    rrr(t_stack *stacks);

#endif