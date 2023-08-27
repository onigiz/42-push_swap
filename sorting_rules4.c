#include "push_swap.h"

void    rra(int *stacka, int top)
{
    int temp;
    int i;

    i = 0;
    temp = stacka[i];
    while(i < top)
    {
        stacka[i] = stacka[i + 1];
        i++;
    }
    stacka[top] = temp;
    ft_printf("rra\n");
}

void    rrb(int *stackb, int top)
{
    int temp;
    int i;

    i = 0;
    temp = stackb[i];
    while(i < top)
    {
        stackb[i] = stackb[i + 1];
        i++;
    }
    stackb[top] = temp;
    ft_printf("rrb\n");
}

void    rrr(t_stack *stacks)
{
    rra(stacks->stacka, topa);
    rrb(stacks->stackb, topb);
    ft_printf("rrr\n");
}