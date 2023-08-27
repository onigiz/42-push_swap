#include "push_swap.h"

void    pb(t_stack *stacks)
{
    int temp;
    //temp kullanmamın sebebi topa/topb değiştirdiğim içim
    //onları kullanarak sayılara erişemeyecek olmam
    temp = stacks->stcaka[topa];
    stacks->topa--;
    stacks->topb++;
    stacks->stackb[topb] = temp;
    ft_printf("pb\n");
}

void    pa(t_stack *stacks)
{
    int temp;

    temp = stacks->stackb[topb];
    stacks->topb--;
    stacks->topa++;
    stacks->stacka[topa] = temp;
    ft_printf("pa\n");
}