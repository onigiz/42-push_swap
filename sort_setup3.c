#include "push_swap.h"

//seçilen sayıyı b'nin en üstüne çıkarıyor
void    get_top(t_stack *stacks, int index)
{
    int i;

    if (stacks->topb / 2 > index)
    {
        i = stacks->topb - index;
        while (i > 0)
        {
            ra(stacks->stackb, stacks->topb);
            i--;
        }   
    }
    else
    {
        i = index;
        while (i >= 0)
        {
            rra(stacks->stackb, stacks->topb);
            i--;
        }
    }
}

//sayıyı a'da uygun olan yere koy
void    push_and_place(t_stack *stacks, int pos)
{
    int i;

    if (stacks->topa / 2 > pos)
    {
        i = stacks->topb - pos;
        while (i > 0)
        {
            ra(stacks->stacka, stacks->topa);
            i--;
        }   
    }
    else
    {
        i = pos;
        while (i >= 0)
        {
            rra(stacks->stacka, stacks->topa);
            i--;
        }
    }
    //uygun yere gelince sayıyı a stackine at
    pa(stacks);
}

void    get_min_to_top(t_stack *stacks)
{
    int pos;
    int i;

    pos = min_position_stacka(stacks);
    if (stacks->topa / 2 > pos)
    {
        i = stacks->topb - pos;
        while (i > 0)
        {
            ra(stacks->stacka, stacks->topa);
            i--;
        }   
    }
    else
    {
        i = pos;
        while (i >= 0)
        {
            rra(stacks->stacka, stacks->topa);
            i--;
        }
    }
}