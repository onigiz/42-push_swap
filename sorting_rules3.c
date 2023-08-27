#include "push_swap.h"

void    ra(int *stacka, int top)
{
    int temp;

    temp = stacka[top];
    while(top > 0)
    {
        stacka[top] = stacka[top -1];
        top--;
    }
    stacka[0] = temp;
    ft_printf("ra\n");
}

void    rb(int *stackb, int top)
{
    int temp;

    temp = stackb[top];
    while(top > 0)
    {
        stackb[top] = stackb[top -1];
        top--;
    }
    stackb[0] = temp;
    ft_printf("rb\n");
}

void    rr(t_stack *stacks)
{
    ra(stacks->stacka, topa);
    rb(stacks->stackb, topb);
    ft_printf("rrr\n");
}
