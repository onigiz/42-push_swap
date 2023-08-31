#include "push_swap.h"

void    three_sort(t_stack *stacks)
{
    int max;

    max = max_position_stacka(stacks);
    if (max == 0)
    {
        if (stacks->stacka[2] > stacks->stacka[1])//54, 2, 325
            sa(stacks->stacka, stacks->topa);
    }
    else if (max == 1)
    {
        rra(stacks->stacka, stacks->topa);//en büyük en alta geldi
        if (stacks->stacka[2] > stacks->stacka[1])
            sa(stacks->stacka, stacks->topa);
    }
    else
    {
        ra(stacks->stacka, stacks->topa);//en büyük en alta
        if (stacks->stacka[2] > stacks->stacka[1])
            sa(stacks->stacka, stacks->topa);
    }
}

void    four_sort(t_stack *stacks)
{
    int min;

    min = min_position_stacka(stacks);
    if (min >= 2)
    {
        while (min < stacks->topa)//en küçük en üste geldi
        {
            ra (stacks->stacka, stacks->topa);
            min++;
        }
        
    }
    else
    {
        while (min >= 0)//en küçük en üste geldi
        {
            rra(stacks->stacka, stacks->topa);
            min--;
        }
    }
    pb(stacks);//en küçük b stackine atıldı
    three_sort(stacks);
    pa(stacks);//en küçük a stackinin en üstüne geri kondu
}

void    five_sort(t_stack *stacks)
{
    int min;

    min = min_position_stacka(stacks);
    if (min >= 2)
    {
        while (min < stacks->topa)//en küçük en üste geldi
        {
            ra (stacks->stacka, stacks->topa);
            min++;
        }
        
    }
    else
    {
        while (min >= 0)//en küçük en üste geldi
        {
            rra(stacks->stacka, stacks->topa);
            min--;
        }
    }
    pb(stacks);//en küçük b stackine atıldı
    four_sort(stacks);
    pa(stacks);//en küçük a stackinin en üstüne geri kondu
}