#include "push_swap.h"

void    pb(t_stack *stacks)
{
    int temp;
    //temp kullanmamın sebebi topa/topb değiştirdiğim içim
    //onları kullanarak sayılara erişemeyecek olmam
    temp = stacks->stacka[stacks->topa];
    stacks->topa--;
    stacks->topb++;
    stacks->stackb[stacks->topb] = temp;
    ft_printf("pb\n");
}

void    pa(t_stack *stacks)
{
    int temp;

    temp = stacks->stackb[stacks->topb];
    stacks->topb--;
    stacks->topa++;
    stacks->stacka[stacks->topa] = temp;
    ft_printf("pa\n");
}