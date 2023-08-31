#include "push_swap.h"

void    big_sort(t_stack *stacks)
{
    int choosen;//b'den a'ya atılacak seçilmiş sayının pozisyonu
    int max_index;//a stackteki max sayı

    //5 sayı kalana kadar b'ye at, a'yı sırala, pivot alabileceğin bir sıralama olsun
    while (stacks->topa != 4)
    {
        pb(stacks);
    }
    five_sort(stacks);
    //b stacki tamamen boşaltılana kadar devam et
    while (stacks->topb > -1)
    {
        //b'deki en düşük maliyetli sayıyı bul ve a'ya yerleştir
        choosen = choose_most_efficient(stacks);
        select_and_place(stacks, choosen);
    }
    max_index = max_position_stacka(stacks);
    if (max_index >= stacks->topa / 2)
    {
        while (is_sorted(stacks) != 1)
            ra(stacks->stacka, stacks->topa);
        if (is_sorted(stacks) != 1)
            ra(stacks->stacka, stacks->topa);
    }
    else
    {
        while (is_sorted(stacks) != 1)
            rra(stacks->stacka, stacks->topa);
    }
        
}