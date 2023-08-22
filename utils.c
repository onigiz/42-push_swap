#include "push_swap.h"

void    all_free(t_stack *stacks)
{
    free(stacks->stacka);
    stacks->stacka = NULL;
    free(stacks->stackb);
    stacks->stackb = NULL;
    free(stacks);
    stacks = NULL;
}

void    error_handle(t_stack *stacks)
{
    ft_printf("Error!!");
    all_free(stacks);
    exit(1);
}