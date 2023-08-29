#include "push_swap.h"

void    big_sort(t_stack *stacks)
{
    //b'deki uygun index
    int index;
    //a'daki uygun spot
    int pos;

    while (stacks->topa != 4)
    {
        pb(stacks);
    }
    five_sort(stacks);
    while (stacks->topb > -1)
    {
        index = find_cheapest(stacks);
        get_top(stacks, index);
        //artık en üstte lazım olan sayı var b'de
        pos = next_stacka(stacks, stacks->stackb[stacks->topb]);
        //pos'un bir üstüne yerleştireceğiz
        push_and_place(stacks, pos);
        get_min_to_top(stacks);
    }

    
}